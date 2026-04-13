# it's called 'naive' for a reason, once this pattern is recognized, it all falls apart.
# what's new here is that all process is done once the program starts.
# real-time encryption in the previous version is basically useless because it all ends up the same.
# the process goes: per session, get letters, encrypt them randomly, store and use them.

import random, string, json

arabic = ''.join(chr(i) for i in range(0x0600, 0x06FF))
chars = ' ' + string.digits + string.ascii_letters + string.punctuation + arabic
encryption_chars = list(chars)
encryption_dic = {}

for letter in chars:                            # looping on a fixed variable to get each character.
    encryption = random.choice(encryption_chars)
    encryption_dic[encryption] = letter         # encryption -> key, i had to sacrifice one of them...
    encryption_chars.remove(encryption)

# saving session encryption dictionary to a json file:
file_name = "last_encryption_dictionary.json"
with open(file_name, "w+") as file:
    json.dump(encryption_dic, file)

#----------------------------------------------------------------------------------------------------------

def get_key(item):                              # had to do it myself, i'm looking at you Python.
    for key, value in encryption_dic.items():
        if value == item:
            return key
    return None

def encrypt(s):
    encrypted = ""
    for char in s:
        encrypted += get_key(char)
    return encrypted

def decrypt(s):
    decrypted = ""
    for char in s:
        decrypted += encryption_dic.get(char)
    return decrypted

#----------------------------------------------------------------------------------------------------------

def main():

    print("-------------------- Text Encryption App V2 --------------------")
    print("Note: Encryption is fixed within the session. (don't count on this).")
    print(f"Note: A file holds the encryption dictionary named '{file_name}' has been created.")
    print(f"Note: Arabic WHOLE unicode, English letters, punctuation and digits are allowed.")
    exiting_word = "[exit]"
    print(f"Note: type '{exiting_word}' anywhere to exit.")
    print()

    while True:
        encrypt_word = input("Encrypt: ")
        if encrypt_word == exiting_word:
            break
        print(encrypt(encrypt_word))
        print()

        decrypt_word = input("Decrypt: ")
        if decrypt_word == exiting_word:
            break
        print(decrypt(decrypt_word))
        print()

if __name__ == '__main__':
    main()
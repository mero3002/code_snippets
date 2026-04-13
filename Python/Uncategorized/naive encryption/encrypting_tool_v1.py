# it's called 'naive' for a reason, once this pattern is recognized, it all falls apart.
import string
import random

print("--------- Text Encryption App ---------")
print("Note: Encryption is fixed within the session. (don't count on this)")
exiting_word = "[exit]"
print(f"Note: type '{exiting_word}' anywhere to exit.")

def get_key(value, dic):
    for key, item in dic.items():
        if item == value:
            mf = key
            return mf
    return None
chars = string.ascii_letters + string.digits + string.punctuation
chars_list = [char for char in chars]
encryption_dict = {}

while True:
    encrypt_word =  input("Encrypt: ")
    if encrypt_word == exiting_word:
        break

    for letter in encrypt_word:

        encryption = random.choice(chars_list)
        exists = False
        for value in encryption_dict.values():
            if letter == value:
                exists = True
                break
        if exists:
            print(get_key(letter, encryption_dict), end='')
            continue
        encryption_dict.update({encryption : letter})
        chars_list.remove(encryption)
        print(encryption, end='')

    print()
    print()
    # print(encryption_dict)
    decrypt_word = input("Decrypt: ")
    if decrypt_word == exiting_word:
        break

    for letter in decrypt_word:
        exists = True
        decryption_test = encryption_dict.get(letter)
        if not decryption_test:
            exists = False
            print(f"The letter '{letter}' was not encrypted here. encrypt it first")
            print()
            break

    if not exists:
        continue

    for letter in decrypt_word:
        decryption = encryption_dict.get(letter)
        print(decryption, end='')
    print()
    print()

# in encryption_dic:
#       key -> random encryption
#       value -> the legit letter

# copy_of_chars = chars_list.copy()
#
# if encryption_dict:
#     for char in copy_of_chars:
#         for value in encryption_dict.values():
#             if char == value:
#                 exists = True
#                 break
#             else:
#                 exists = False
#                 continue
#         if not exists:
#             encryption = random.choice(chars_list)
#             encryption_dict.update({encryption: char})
#             chars_list.remove(encryption)
# else:
#     for char in chars_list:
#         encryption = random.choice(chars_list)
#         encryption_dict.update({encryption: char})
#         chars_list.remove(encryption)

# print(encryption_dict)
# print()
# print(chars_list)
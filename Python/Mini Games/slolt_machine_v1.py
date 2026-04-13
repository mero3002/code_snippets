import random

rolls = 0
fruits = ('apple', 'banana', 'pineapple')

print("$$$$$$$$$$$$   $LOT MACHINE   $$$$$$$$$$$$")

while True:
    slot_in = input("ENTER AMOUNT ($): ")
    if not slot_in.isdigit():
        print("INVALID INPUT, ENTER A POSITIVE INTEGER")
        continue
    break
# slot_in = 10
slot = slot_out = int(slot_in)
print(f"STARTER BALANCE = ${slot}, DON'T WASTE THEM!")
print()
while True:
    decision = input("(r)oll or (q)uit? ")
    # decision = 'r'
    if decision == 'r':
        rolls += 1
        fruit_1 = random.choice(fruits)
        fruit_2 = random.choice(fruits)
        fruit_3 = random.choice(fruits)
        machine = (fruit_1, fruit_2, fruit_3)
        print()
        print('| ', end='')
        for item in machine:
            match item:
                case 'apple':
                    print('🍏', end=' | ')
                case 'banana':
                    print('🍌', end=' | ')
                case 'pineapple':
                    print('🍍', end=' | ')

        print()
        if machine[0] == machine[1] == machine[2]:
            slot_out += 1
            print("WIN")
            print(f"BALANCE = ${slot_out}")
        else:
            slot_out -= 1
            print("LOSS")
            print(f"BALANCE = ${slot_out}")

        if slot_out == 1:
            print("LAST CHANCE, CHAMP")

        if slot_out == 0:
            print("HAHAHAHA, GET OUT")
            print(f"ROLLS: {rolls}")
            break
    else:
        print(f"ROLLS: {rolls}")
        print(f"Gain: {slot_out - slot}")
        print("COME BACK SOON!")
        break
exit()
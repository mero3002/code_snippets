import random

print("------------ Number Guessing Game ------------")
chances = 6
score = 0
while True:
    case = 'loser'
    while True:
        lowest_in = input("Lowest: ")
        if lowest_in.isdigit():
            break
        else:
            print("Invalid, Enter A Positive Integer.")

    while True:
        highest_in = input("Highest: ")
        if highest_in.isdigit():
            if int(highest_in) <= int(lowest_in):
                print("Highest Cannot Be Less Than or Equal To Lowest.")
            else:
                break
        else:
            print("Invalid, Enter A Positive Integer.")

    lowest = int(lowest_in)
    highest = int(highest_in)
    num = random.randint(lowest, highest)

    print(f"\nGuess The Integer ({lowest} : {highest})")
    print(f"You Have {chances} Chances.\n")

    for trial in range(chances):
        while True:
            guess_in = input(f"Guess {trial + 1}: ")
            if guess_in.isdigit():
                if int(guess_in) > highest or int(guess_in) < lowest:
                    print("Guess Cannot Be Less Than Lowest Nor Higher Than Highest.")
                else:
                    break
            else:
                print("Invalid, Enter A Positive Integer.")

        guess = int(guess_in)
        if guess == num:
            case = 'winner'
            break
        elif trial < chances - 1:
            print("a little higher ..." if guess < num else "a little lower ...")
            if trial == chances - 2:
                print("(careful, this is your last shot)")

    if case == 'winner':
        score += 1
        print(f"CORRECT! You Guessed it in {trial + 1} Trial/s")
        print(f"Your Score: {score}")
    else:
        print(f"Better Luck Next Time. The Number Was {num}.")
        print(f"Your Score: {score}")
    print()
    decision = input("Another Round? (y/n) ").lower()
    if decision != 'y':
        break
    continue

print()
input("Press Enter to Exit")
exit()
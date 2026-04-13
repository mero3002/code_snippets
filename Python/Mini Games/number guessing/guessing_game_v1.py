import random

print("--------------- Number Guessing Game ---------------")
low = int(input("Lowest: "))
high = int(input("Highest: "))
trials = 6
while True:
    print(f"Guess the random integer, you only have {trials} trials.")

    num = random.randint(low, high)
    trial = 0
    case = 'loser'
    for i in range(trials):
        trial = i + 1
        guess = int(input(f"Guess {i + 1}: "))
        if guess == num:
            case = 'winner'
            break
        elif guess < num and trial != trials:
            print("A little higher ...")
        elif guess > num and trial != trials:
            print("A little lower ...")
        if trial == trials - 1 and case == 'loser':
            print("(careful, this is your last shot)")

    if case == 'winner':
        print("HELL YEAH")
        print(f"You Won After {trial} trials!")
        if trial == trials:
            print("IT WAS TOO CLOSE!")
        elif trial < 3:
            print("EZ!")
    else:
        print("Better Luck Next Time!")
        print(f"The Number Was: {num}")
    print()
    decision = input("Another go? (y/n) ")
    if decision.lower() == 'y':
        continue
    else:
        break
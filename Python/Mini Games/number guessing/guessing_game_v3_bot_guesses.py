import random
import time

print("--------- Guessing Game But Reversed ---------")
chances = 6
lowest = 0
highest = 100
player_score = 0
bot_score = 0

print(f"Chances: {chances}")
print(f"Range: ({lowest} : {highest})")

while True:
    winner = "Player"

    while True:
        num = input("Number to Guess: ")
        if num.isdigit():
            if 100 >= int(num) >= 0:
                break
            else:
                print("Out of Range.")
        else:
            print("Invalid, Enter A Positive Integer.")
    legit_num = int(num)
    guess = random.randint(lowest, highest)
    lowest_guess = 0
    highest_guess = 100
    for i in range(chances):
        print(f"Guess {i + 1}: {guess}")

        if guess > legit_num:
            if i == chances - 1:
                break
            print("a little lower ...")
            highest_guess = guess
            guess = random.randint(lowest_guess + 1, highest_guess)
        elif guess < legit_num:
            if i == chances - 1:
                break
            print("a little higher ...")
            lowest_guess = guess
            guess = random.randint(lowest_guess, highest_guess - 1)
        else:
            winner = "Bot"
            break
        # time.sleep(1.5)

    if winner == "Player":
        player_score += 1
        print(f"Player Won, Number Was {legit_num}")
    else:
        bot_score += 1
        print(f"Bot Won on Trial {i + 1}.")

    print()
    decision = input("Another Round? (y/n) ")
    if decision.lower() == 'y':
        continue
    else:
        print(f"Player Score: {player_score}")
        print(f"Bot Score: {bot_score}")
        break
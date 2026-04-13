# mini version of wordle
import random
import os

chances = 8
words = (
    'APPLE', 'BREAD', 'CHAIR', 'DANCE', 'EARTH',
    'FIELD', 'GRASS', 'HAPPY', 'INNER', 'JUICE',
    'KNIFE', 'LEMON', 'MUSIC', 'NIGHT', 'OCEAN',
    'PAPER', 'QUEEN', 'RIVER', 'SHEEP', 'TABLE',
    'UNDER', 'VOICE', 'WATER', 'WHEEL', 'YOUNG',
    'ZEBRA', 'ANGEL', 'BEACH', 'CANDY', 'DIRTY',
    'EARLY', 'FAITH', 'GIANT', 'HORSE', 'STORM',
    'JEWEL', 'KNOCK', 'LIGHT', 'MONEY', 'NOISE',
    'OLIVE', 'PEACE', 'QUICK', 'RADIO', 'SMILE',
    'TIGER', 'UNCLE', 'VALID', 'WITCH', 'XENON',
    'YACHT', 'ABUSE', 'BLOOD', 'CLOUD', 'DEATH',
    'EQUAL', 'FLUTE', 'GLOBE', 'HEART', 'IMAGE',
    'JOINT', 'KARMA', 'LARGE', 'MONTH', 'NERVE',
    'OPERA', 'PLANT', 'QUIET', 'CRISP', 'SNAKE',
    'TOWER', 'UNION', 'VITAL', 'WASTE', 'EXACT',
    'BLANK', 'ZONES', 'ALARM', 'BLACK', 'CRAFT',
    'DRIVE', 'ENTRY', 'FLAME', 'GRADE', 'HUMAN',
    'IDEAL', 'JAPAN', 'LOWER', 'MAGIC', 'NOVEL',
    'ORDER', 'PILOT', 'REACH', 'SAUCE', 'TEACH',
    'ULTRA', 'VISIT', 'WORLD'
)

score = 0
while True:
    print("---------------- 5-Letters Wordle Game ----------------")
    caps = "| CAPSLOCK is recommended |"
    you = "|   you've got " + str(chances) + " trials   |"
    print(f"{caps:>41} \n {you:>40}")
    word = random.choice(words)
    # print(word)
    for chance in range(chances):

        while True:
            winner = 'Bot'
            if chance == chances - 1:
                print("careful. last shot")
            guess_in = input(f"Guess {chance + 1}: ")
            if not guess_in.isalpha():
                print("Enter a full STRING word")
                continue

            if len(guess_in) != 5:
                print("Enter a 5-letters word")
                continue
            break

        guess = guess_in.upper()
        if guess == word:
            winner = 'Player'
            break

        if chance == chances - 1:
            break

        print('         ', end='')
        for i, letter in enumerate(guess):
             if letter == word[i]:
                 print(letter, end='')
             else:
                 print('_', end='')
        print()

    if winner == 'Bot':
        print()
        print("You Lost!")
        print(f"The Word: {word}")
        print(f"Your Score: {score}")

    else:
        score += 1
        print()
        print("YOU WON!")
        print(f"The Word: {word}")
        print(f"Your Score: {score}")

    print()
    decision = input("Another Round? (y/n) ").lower().strip()
    if decision != 'y':
        break
    os.system('cls')
    print()
    continue
input("Press Any Key to Exit")
exit()
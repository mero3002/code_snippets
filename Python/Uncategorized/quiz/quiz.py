questions = (("Question 1? "),
             ("Question 2? "),
             ("Question 3? "),
             ("Question 4? "))

answers = (('a'),
           ('b'),
           ('c'),
           ('b'))

options = (("a-\nb-\nc-\nd-"),
           ("a-\nb-\nc-\nd-"),
           ("a-\nb-\nc-\nd-"),
           ("a-\nb-\nc-\nd-"))
guesses = []
score = 0

for i, question in enumerate(questions):
    print('---------------------')

    print(question)
    print(options[i])
    while True:
            guess = input("Answer: ")
            if guess not in ('a', 'b', 'c', 'd'):
                print("Invalid choice!")
                continue
            elif guess == answers[i]:
                print("CORRECT!")
                score += 1
                guesses.append(guess)
                break
            else:
                print("INCORRECT!")
                guesses.append(guess)
                break

print("-------------------------")
print("         RESULTS         ")
print("-------------------------")
print(f"Your Score = {int((score / len(questions) * 100))}%")
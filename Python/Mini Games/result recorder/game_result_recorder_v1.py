# day 2 of learning python, this is my first biggest project, considered as a starting point.
# ----------------------------------------------------------------------------------------------------------------------

# List of Players:
numberOfPlayers = int(input("Number of Players: "))
listOfPlayers = []
for i in range(numberOfPlayers):
    listOfPlayers.append(input(f"Player {i + 1} Name: "))

# Rounds:
numberOfRoundsV = int(input("\nNumber of Rounds: "))

# List of Scores:
scores = []
for r in range(numberOfRoundsV):
    row = []
    print(f"Round {r + 1}:")
    for c in range(numberOfPlayers):
        score = int(input(f"{listOfPlayers[c]}\'s Score: "))
        row.append(score)
    scores.append(row)

# Results
print("----------------\nResults:")

for i in range(numberOfRoundsV):
    print(f"Round {i + 1}")
    for c in range(numberOfPlayers):
        print(f"{listOfPlayers[c]}\'s Score: ")
        for r in range(numberOfRoundsV):
            print(scores[r][c])
    print("-----------")
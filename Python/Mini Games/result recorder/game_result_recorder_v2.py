# can we improve it a lil bit?
# I'm adding a new feature that determines who won
#-----------------------------------------------------------------------------------------------------------------------

# players and rounds:
players = int(input("Number of Players: "))
players_list = []
for i in range(players):
    players_list.append(input(f"Player {i + 1} Name: "))
rounds = int(input("\nRounds: "))
# let's create a list with its rows representing rounds (in order):
scores = []
for i in range(rounds):
    row = []
    print(f"Round {i + 1}:")
    for c in range(players):
        score = int(input(f"{players_list[c]}'s Score: "))
        row.append(score)
    scores.append(row)

# dictionary for scores:
scores_dict = {}
for player in players_list:
    scores_dict[player] = 0

# results:
print("-------------\nResults:\n")
for i in range(rounds):
    print(f"Round {i + 1} Scores: ")
    for c in range(players):
        print(f"{players_list[c]}': {scores[i][c]}")
        scores_dict[players_list[c]] += scores[i][c]
    print("--------------")

highest_score = 0
winner = None
for player in scores_dict:
    if scores_dict[player] > highest_score:
        highest_score = scores_dict[player]
        winner = player

print(f"The Winner is {winner}, With Total Score of {highest_score}")
import random
print("---------------- Rock Paper Scissors Game ----------------")
game = ("Rock", "Paper", "Scissors")
final_score = 3
player_score = 0
bot_score = 0
print(f"First to {final_score} Wins")
while True:
        bot = random.choice(game)

        while True:
                print()
                print("Choose: ")
                print("1- Rock\n2- Paper\n3- Scissors")
                player = input()
                if player in ('1', '2', '3'):
                        break
                else:
                        print("Invalid Choice.")
                        print()

        if player == '1':
                player = 'Rock'
        elif player == '2':
                player = 'Paper'
        else:
                player = 'Scissors'

        print(f"Player: {player}")
        print(f"Bot: {bot}")

        if player == bot:
                print("Tie")
        elif player == 'Rock' and bot == 'Scissors':
                player_score += 1
                print("Player wins")
        elif player == 'Rock' and bot == 'Paper':
                bot_score += 1
                print("Bot wins")
        elif player == 'Paper' and bot == 'Rock':
                player_score += 1
                print("Player wins")
        elif player == 'Paper' and bot == 'Scissors':
                bot_score += 1
                print("Bot wins")
        elif player == 'Scissors' and bot == 'Rock':
                bot_score += 1
                print("Bot wins")
        elif player == 'Scissors' and bot == 'Paper':
                player_score += 1
                print("Player wins")

        winner = None
        if player_score == final_score:
                winner = "Player"
                break
        elif bot_score == final_score:
                winner = "Bot"
                break
        else:
                continue
print()
print("-------------- Round Score --------------")
print(f"Player: {player_score}\nBot: {bot_score}")
print(f"Winner: {winner}")
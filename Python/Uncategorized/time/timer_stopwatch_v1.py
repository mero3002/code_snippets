import time

def timer():
    n = int(input("Countdown time (sec): "))

    for i in reversed(range(n + 1)):
        if i == 0:
            break
        else:
            print(i)
            time.sleep(1)
    print("BOOOM!")

def stop_watch():
    for i in range(1, 61):
        print(i)
        time.sleep(1)

print("Choose:")
print("1- Timer")
print("2- Stop Watch")

try:
    decision = int(input())
    if decision == 1:
        timer()
    elif decision == 2:
        print("press CTRL + C to stop, it is what it is.")
        stop_watch()
    else:
        print("Invalid input.")
except ValueError:
    print("You did not enter a number.")
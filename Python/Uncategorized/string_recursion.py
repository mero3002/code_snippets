def print_times(s, n):
    if n == 0:
        return 0
    else:
        print(s)
        print_times(s, n - 1)

s = input("Enter a string: ")
n = int(input("Enter an integer: "))

print_times(s, n)
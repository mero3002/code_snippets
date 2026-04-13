import math
def is_triangle(a, b, c):
    if a + b == c or b + c == a or c + a == b:
        return True
    else:
        return False
def receiver():
    a = int(input("a: "))
    b = int(input("b: "))
    c = int(input("c: "))
    print(is_triangle(a, b, c))

receiver()
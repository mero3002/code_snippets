import turtle
import math
bob = turtle.Turtle()
bob.speed(0)
def polygon(t, l, n):
    a = 360/n
    for i in range(n):
        t.fd(l)
        t.lt(a)

def circle(t, r):
    circ = 2 * math.pi * r
    n = int(circ / 3 + 1)
    l = circ / n
    polygon(t, l, n)

circle(bob, 100)
turtle.mainloop()
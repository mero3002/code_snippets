import turtle
import math

bob = turtle.Turtle()
bob.speed(0)

def polyline(t, n, length, angle):
    for i in range(n):
        t.fd(length)
        t.lt(angle)

#polyline(bob, 4, 100, 90)

def polygon(t, n, length):
    angle = 360 / n
    polyline(t, n, length, angle)

#polygon(bob, 100, 3)

def arc(t, r, angle):
    circ = 2 * math.pi * r * angle / 360
    n = int(circ / 3) + 1
    step_length = circ / n
    step_angle = float(angle) / n
    polyline(t, n, step_length, step_angle)

#arc(bob, 100, 270)

def circle(t, r):
    arc(t, r, 360)

circle(bob, 150)
turtle.mainloop()
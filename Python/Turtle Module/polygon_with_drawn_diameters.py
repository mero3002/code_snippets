import turtle
import math
bob = turtle.Turtle()

def polyline(t, n, length, angle):
    for i in range(n):
        t.fd(length)
        t.lt(angle)

def polygon(t, n, length):
    angle = 360 / n
    polyline(t, n, length, angle)
    radius_connector(t, n, length, angle)

def radius_connector(t, n, length, angle):
    r = length / (2 * math.sin(math.pi / n))
    rotating_angle = (180 - angle) / 2
    t.lt(rotating_angle)
    t.fd(r)
    t.lt(180)
    for i in range(n):
        t.fd(r)
        t.bk(r)
        t.lt(angle)
bob.pu()
bob.rt(90)
bob.fd(100)
bob.lt(90)
bob.pd()

polygon(bob, n=4, length=100)
turtle.mainloop()
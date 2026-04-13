import turtle
bob = turtle.Turtle()
bob.speed(0)
def arc(t, angle, length):
    for i in range(angle):
        t.fd(length)
        t.rt(1)

arc(bob, 60, 2)

turtle.mainloop()
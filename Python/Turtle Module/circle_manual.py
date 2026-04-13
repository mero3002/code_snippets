import turtle
bob = turtle.Turtle()
bob.speed(0)

def almost_a_circle(t, l, n):
    a = 360/n
    for i in range(n):
        t.fd(l)
        t.lt(a)

almost_a_circle(bob, 1, 200)


turtle.mainloop()
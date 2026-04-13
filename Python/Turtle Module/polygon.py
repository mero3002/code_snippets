import turtle
bob = turtle.Turtle()

def polygon(t, l, n):
    a = 360/n
    for i in range(n):
        t.fd(l)
        t.lt(a)

polygon(bob, n=4, l=100)
turtle.mainloop()
import turtle

bob = turtle.Turtle()

def flower(t):
    for c in range(10):
        for i in range(70):
            t.fd(2)
            t.rt(1)
        t.lt(250)
        for i in range(70):
            t.fd(2)
            t.rt(1)
bob.speed(0)
flower(bob)
turtle.mainloop()
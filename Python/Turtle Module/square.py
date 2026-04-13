import turtle
bob = turtle.Turtle()
bob.speed(0)
#bob.fd(100)
#bob.lt(90)
#bob.fd(100)
#bob.lt(90)
#bob.fd(100)
#bob.lt(90)
#bob.fd(100)

def square(t, kkk):
    for i in range(4):
        t.fd(kkk)
        t.lt(90)
#length = int(input("Enter length: "))
length = 100
square(bob, length)
turtle.mainloop()
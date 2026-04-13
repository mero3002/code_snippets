import turtle

flower = turtle.Turtle()
flower.speed(0)

def petal(t):
    for i in range(2):
        t.circle(100, 60)
        t.lt(120)

def flower_design(t):
    for i in range(petals):
        petal(t)
        t.lt(360 / petals)

petals = 7


flower_design(flower)
turtle.mainloop()
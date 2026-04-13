import turtle
import math
bob = turtle.Turtle()

a = 100
b = 100

temp = math.sqrt(pow(a, 2) + pow(b, 2))
c = math.sqrt(pow(temp, 2))

bob.lt(90)
bob.fd(a)
bob.bk(a)
bob.rt(90)
bob.fd(b)
bob.lt(135)
bob.fd(c)
print(c)
turtle.mainloop()
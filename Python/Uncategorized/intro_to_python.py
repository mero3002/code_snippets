# Datatypes are assigned automatically, and this is how you can demonstrate them:
x = 'Hello World'
print(type(x).__name__)          #str
y = 7
print(type(y).__name__)          #int
PI = 3.14
print(type(PI).__name__)         #float
boolean = True
print(type(boolean).__name__)    #bool
print('-------------------')
# ----------------------------------------------------------------------------------------------------------------------
# Datatype Casting:
price_str = "99.7"              # Started as a string.
price_float = float(price_str)  # Now it's a float.
#price_int = int(price_str)     # Gives an error, because the original string has a floating point.
price_int = int(price_float)    # Works out, because the original is a float now.

print("String: " + price_str)
print("Float: " + str(price_float))
print("Integer: " + str(price_int))
# Notice that if `print` has a string input, everything inside must be string
print('-------------------')
# ----------------------------------------------------------------------------------------------------------------------
# f-strings handles the string conversion inside the `print` function:
print(f"Float: {price_float}")
# ----------------------------------------------------------------------------------------------------------------------
# Accepting input:
name = input("Enter your name: ") # name is always a String.
print("Glorious return, " + name)
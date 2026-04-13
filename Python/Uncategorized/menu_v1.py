# yeah you have to enter the EXACT item name, silly i know
menu = {"Pizza" : 250,
        "Hamburger" : 200,
        "Fries" : 60,
        "Salad" : 100,
        "Popcorn" : 30}
cart = []
total = 0
print("--------------- MENU ---------------")
print(f"{"Item":14}{"Price":14}")
for key, value in menu.items():
    print(f"{key:14}{value:<14}")

while True:
    add = input("Add to Cart (q to quit): ")
    if add.lower() == 'q':
        break
    elif add in menu.keys():
        cart.append(add)
        total += menu.get(add)
    else:
        print("Invalid input.")
print("-----------------")
print("     Receipt     ")
print("-----------------")

print("Cart:")
for item in cart:
    print(item, end=' ')
print()
print(f"Total Price = {total}L.E.")
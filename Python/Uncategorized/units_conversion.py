#print('help menu: Kg --> K')
#print('L --> Lbs')
#print('M --> Meter')
#print('C --> Centimeter')
#print('I --> Inches')
#-------------------------------------------------------------------------------------------------------
while True:
    print("<< Welcome to the measurement units converter! >>")

    print(
        "Enter the letter in the ( ) to convert to the opposite unit:\n"
        "    (kg) for [KG --> LBS]\n"
        "    (l)  for [LBS --> KG]\n"
        "    (km) for [KM --> Miles]\n"
        "    (m)  for [Miles --> KM]\n"
        "    (c)  for [Centimeters --> Inches]\n"
        "    (i)  for [Inches --> Centimeters]\n"
        "    (f)  for [Fahrenheit --> Celsius]\n" 
        "    (cs) for [Celsius --> Fahrenheit]\n"
    )
#-------------------------------------------------------------------------------------------------------
    #list = [(kg) for KG --> LBS, (l) for LBS --> KG,  (km) for KM --> Miles, (m) for Miles --> KM,  (c) for Centimeters --> Inches, (i) for Inches --> Centimeters, (f) for Fahrenheit --> Celsius, (cs) for Celsius --> Fahrenheit]
    #for item in list
    #   print(item)
    #while True:
#-------------------------------------------------------------------------------------------------------
    mu = input("Measurement Unit : ").lower().strip()
    while mu.lower() not in ['kg', 'km', 'i', 'l', 'c', 'm', 'f', 'cs']:
        print("Invalid input, please enter a valid measurement unit (look above).")
        mu = input("Measurement Unit  : ").lower().strip()
#-------------------------------------------------------------------------------------------------------
    n = input("Enter the number: ")
    while not n.strip():
        print("Please Enter a number.")
        n = input("Enter the number: ")
    while len(n) == 0:
         print("Please Enter a number.")
         n = input("Enter the number: ")
    while str.isalpha(n):
        print("Invalid input, Please Enter a number.")
        n = input("Enter the number: ")
#-------------------------------------------------------------------------------------------------------
    if mu == 'kg' :
        print("Weight in Lbs = " + f"{float(n) * 2.20462262185:.2f} lbs\n")
    elif mu == 'l' :
        print("Weight in Kg = " + f"{float(n) / 2.20462262185:.2f} kg\n")
    elif mu == 'c' :
        print("Length in Inches = " + f"{float(n) * 2.54} inch\n")
    elif mu == 'i' :
        print("Length in Centimeters = " + f"{float(n) / 2.54} centimeter\n")
    elif mu == 'm' :
        print("Distance in Km = " + f"{float(n) * 1.609344:.2f} km\n")
    elif mu == 'km' :
        print("Distance in Miles = " + f"{float(n) / 1.609344:.2f} mile\n")
    elif mu == 'f':
        print("Temperature in Celsius = " + f"{(float(n) - 32) * 5 / 9:.2f} °C\n")
    elif mu == 'cs':
        print("Temperature in Fahrenheit = " + f"{(float(n) * 9 / 5) + 32:.2f} °F\n")
#-------------------------------------------------------------------------------------------------------
    e = input("(E)xit or (N)ew measurement? ").strip().capitalize()
    while e not in['E', 'N']:
        e = input("(E)xit or (N)ew measurement? ").strip().capitalize()
    if e == 'E':
        break



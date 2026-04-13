import os

file_accept = input("Enter File's Name: ")
print("Choose The Method:")
print("1- Creating")
print("2- Appending")
print("3- Overwriting")
print("4- Reading")
print("5- Deleting")

edit = int(input())
if edit == 1: # Creating
    if os.path.exists(file_accept):
        print("This File Already Exists")
        decision = input("(e)xit / (o)verwrite / (a)ppend? ")
        if decision.lower() == 'e':
            exit()
        elif decision.lower() == 'o':
            with open(file_accept, "w+") as f:
                add = input("Add Text: ")
                f.write(add)
            print("File OVERWRITTEN Successfully")
        elif decision.lower() == 'a':
            with open(file_accept, "a+") as f:
                add = input("Add Text: ")
                f.write(add)
            print("File UPDATED Successfully")
        else:
            print("Invalid Choice.")
            exit()
    else:
        with open(file_accept, "w+") as f:
            add = input("Add Text: ")
            f.write(add)
        print("File CREATED Successfully")

elif edit == 2: # Appending
    if not os.path.exists(file_accept):
        print("File Does Not Exist")
        decision = input("(e)xit or (c)reate? ")
        if decision.lower() == "c":
            with open(file_accept, "w+") as f:
                add = input("Add Text: ")
                f.write(add)
            print("File OVERWRITTEN Successfully")
        elif decision.lower() == "e":
            exit()
        else:
            print("Invalid Choice")
    else:
        with open(file_accept, "a+") as f:
            add = input("Add Text: ")
            f.write(add + '\n')
        print("File UPDATED Successfully")

elif edit == 3: # Overwritting
    if not os.path.exists(file_accept):
        print("File Does Not Exist")
        decision = input("(e)xit or (c)reate? ")
        if decision.lower() == "c":
            with open(file_accept, "w+") as f:
                add = input("Add Text: ")
                f.write(add + '\n')
            print("File OVERWRITTEN Successfully")
        elif decision.lower() == "e":
            exit()
        else:
            print("Invalid Choice")
    else:
        with open(file_accept, "w+") as f:
            add = input("Add Text: ")
            f.write(add + '\n')
        print("File OVERWRITTEN Successfully")

elif edit == 4: # Reading
    if not os.path.exists(file_accept):
        print("File Does Not EXist")
        decision = input("(e)xit or (c)reate? ")
        if decision.lower() == "c":
            with open(file_accept, "w+") as f:
                add = input("Add Text: ")
                f.write(add)
            print("File OVERWRITTEN Successfully")
        elif decision.lower() == "e":
            exit()
        else:
            print("Invalid Choice.")
            exit()
    else:
        with open(file_accept) as f:
            print(f.read())

elif edit == 5: # Deleting
    if not os.path.exists(file_accept):
        print("File Does Not EXist")
    else:
        os.remove(file_accept)
        print("File Deleted Successfully")
else:
    print("Invalid Choice.")
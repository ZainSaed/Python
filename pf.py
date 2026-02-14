print("!!! Password Strength Checker !!!")

password = input("Enter your password (at least 8 characters long): ")

if len(password) < 8:
    print("Password must be at least 8 characters long.")

elif not any(char.isupper() for char in password):
    print("Password must contain at least one uppercase letter.")

else:
    print("Strong Password!")

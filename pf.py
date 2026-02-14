import random

random_number = random.randint(1, 100)
print("!!!Number Guessing Game!!!")
print("Guess a number between 0 and 100 : ")
guess = int(input())
for x in range(1):
    if random_number == guess:
        print(random_number, " ,You are right!")
    else:
        print("The correct numner is :", random_number, "\nBetter Luck Next Time!")

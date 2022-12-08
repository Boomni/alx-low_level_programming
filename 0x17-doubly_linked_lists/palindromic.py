#!/usr/bin/python3
import random

x = random.randrange(900, 999)
y = random.randrange(900, 999)

number = x * y
reverse = 0
while number > 0: 
    digit = number % 10
    reverse = reverse * 10 + digit 
    number = number // 10
if number==reverse:
    print("{} and {} is a palindrome!".format(x, y))
else:
    print(f"Not palindromic!")

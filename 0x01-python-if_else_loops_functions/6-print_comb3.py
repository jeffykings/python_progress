#!/usr/bin/python3

for digit in range(10):
    for digit2 in range(digit + 1, 10):
        if digit == 8 and digit2 == 9:
            print("{}{}".format(digit, digit2))
        else:
            print("{}{}, ".format(digit, digit2), end="")

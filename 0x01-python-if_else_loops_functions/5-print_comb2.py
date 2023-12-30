#!/usr/bin/python
for i in range(100):
    print("{:02}".format(i), end ="")

    if i != 99:
        print(", ", end ="")

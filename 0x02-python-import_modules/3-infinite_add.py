#!/usr/bin/python3

if __name__ == "__main__":
    from sys import argv

    result = 0
    if (len(argv) == 1):
        print("0")

    else:
        for arg in argv[1:]:
            result += int(arg)


        print(result)

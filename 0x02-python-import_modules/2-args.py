#!/usr/bin/python3

if __name__ == "__main__":
    from sys import argv

    i = 0

    if len(argv) == 1:
        print(i, "arguments.")

    else:
        print(f"{len(argv) - 1} argument:")

        for arg in argv:

            if i != 0:
                print(f"{i}: {arg}")

            i += 1

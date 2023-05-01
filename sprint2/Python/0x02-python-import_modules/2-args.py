#!/usr/bin/python3

from sys import argv
argc = len(argv) - 1
if __name__ == "__main__":
    if argc <= 0:
        print(f"{argc} arguments.")
    else:
        if argc == 1:
            print(f"{argc} argument:")
        else:
            print(f"{argc} arguments:")
        for index in range(1, argc + 1):
            print(f"{index}: {argv[index]}")

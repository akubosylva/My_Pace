#!/usr/bin/python3

from sys import argv
result = 0
argc = len(argv)
if argc > 1:
    for index in range(1, argc):
        result = result + int(argv[index])

if __name__ == '__main__':
    print(result)

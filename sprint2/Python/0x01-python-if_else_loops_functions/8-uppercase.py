#!/usr/bin/python3

def uppercase(str):
    for alphabet in str:
        i = ord(alphabet)
        if i >= 97 and i <= 122:
            i -= 32
        print("{:c}".format(i), end="")
    print("")

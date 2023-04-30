#!/usr/bin/python3

for n in range(10):
    for n1 in range(10):
        if n < n1:
            if n == 8 and n1 == 9:
                print("{}{}".format(n, n1))
            else:
                print("{}{}, ".format(n, n1), end="")

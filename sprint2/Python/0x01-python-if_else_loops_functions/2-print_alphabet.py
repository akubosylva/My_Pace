#!/usr/bin/python3
#   one way to solve it
#   for c in range(97, 123):
#        print("{}".format(chr(c)), end="")

#   another way
for i in range(ord('a'), ord('z') + 1):
    print("{}".format(chr(i)), end='')

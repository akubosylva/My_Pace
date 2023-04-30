#!/usr/bin/python3

for c in range(ord('a'), ord('z') + 1):
    if chr(c) != 'e' and chr(c) != 'q':
        print("{}".format(chr(c)), end="")

# another way

#   for c in range(97, 123):
#       if c is not (ord('e')) and c is not (ord('q')):
#           print("{}".format(chr(c)), end="")

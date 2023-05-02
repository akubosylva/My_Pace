#!/usr/bin/python3
def magic_calculation(a, b, c):
    if (a < b):
        return (c)
    elif (c > b):
        return (a + b)
    else:
        return ((a * b) - c)
# uncomment the line of code below to see the bytecodes
import dis
print(dis.dis(magic_calculation))

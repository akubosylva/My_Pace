#!/usr/bin/python3

from sys import argv
from calculator_1 import add, sub, mul, div

argc = len(argv)
if argc != 4:
    print("Usage: ./100-my_calculator.py <a> <operator> <b>")
    exit(1)
operator = argv[2]
f = {"+": add, "-": sub, "/": div, "*": mul}
if operator not in f:
    print("Unknown operator. Available operators: +, -, * and /")
    exit(1)
a = int(argv[1])
b = int(argv[3])
result = f[operator](a, b)
if __name__ == "__main__":
    print("{} {} {} = {}".format(a, operator, b, result))

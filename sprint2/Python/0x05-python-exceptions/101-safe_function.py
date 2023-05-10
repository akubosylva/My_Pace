#!/usr/bin/python3
from sys import stderr
def safe_function(fct, *args):
    try:
        return fct(*args)
    except (ZeroDivisionError, IndexError, ValueError, TypeError) as error:
        stderr.write("Exception: {}\n".format(error))
        return None

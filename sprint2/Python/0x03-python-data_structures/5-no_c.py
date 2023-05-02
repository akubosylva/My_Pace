#!/usr/bin/python3

def no_c(my_string):
    new_str = ""
    for alphabet in my_string:
        if alphabet != 'C' and alphabet != 'c':
            new_str += alphabet
    return new_str

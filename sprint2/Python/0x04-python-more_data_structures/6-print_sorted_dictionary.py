#!/usr/bin/python3

def print_sorted_dictionary(a_dictionary):
    if a_dictionary:
        for key, value in sorted(a_dictionary.items()):
            print("{}: {}".format(key, value))
    return a_dictionary
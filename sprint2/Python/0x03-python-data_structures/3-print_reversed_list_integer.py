#!/usr/bin/python3

def print_reversed_list_integer(my_list=[]):
    if not my_list:
        return
    for i in reversed(range(len(my_list))):
        print("{}".format(my_list[i]))

# another way

def print_reversed_list_integer(my_list=[]):
    if my_list is not None:
        for i in my_list[::-1]:
            print("{}".format(i))

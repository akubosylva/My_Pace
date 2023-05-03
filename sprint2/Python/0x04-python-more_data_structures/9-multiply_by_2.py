#!/usr/bin/python3

# def multiply_by_2(a_dictionary):
#   if a_dictionary:
#        dict = {}
#        tmp = {}
#        for key, value in a_dictionary.items():
#            new_value = value * 2
#            tmp = {key: new_value}
#            dict.update(tmp)
#        return dict
#    return None

def multiply_by_2(a_dictionary):
    return {key: a_dictionary[key] * 2 for key in a_dictionary}

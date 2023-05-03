#!/usr/bin/python3

def update_dictionary(a_dictionary, key, value):
    if a_dictionary is not None:
        new_elem = {key: value}
        a_dictionary.update(new_elem)
        return a_dictionary
    return None

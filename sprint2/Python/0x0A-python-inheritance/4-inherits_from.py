#!/usr/bin/python3
def inherits_from(obj, a_class):
    return (type(obj) is not a_class and issubclass(type(obj), a_class))

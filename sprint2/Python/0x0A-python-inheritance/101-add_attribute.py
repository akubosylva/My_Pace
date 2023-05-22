#!/usr/bin/python3
def add_attribute(obj, attribute, value):
    if ('__dict__' in dir(obj)):
        setattr(obj, attribute, value)
    else:
        raise TypeError("can't add new attribute")

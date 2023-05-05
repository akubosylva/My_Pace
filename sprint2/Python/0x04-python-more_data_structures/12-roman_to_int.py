#!/usr/bin/python3

def value(r):
    if (r == 'I'):
        return 1
    if (r == 'V'):
        return 5
    if (r == 'X'):
        return 10
    if (r == 'L'):
        return 50
    if (r == 'C'):
        return 100
    if (r == 'D'):
        return 500
    if (r == 'M'):
        return 1000
    return -1

def roman_to_int(roman_string):
    if roman_string is None or type(roman_string) is not str:
        return 0
    else:
        res = 0
        i = 0
        while (i < len(roman_string)):
            s1 = value(roman_string[i])
            if (i + 1 < len(roman_string)):
                s2 = value(roman_string[i + 1])
                if (s1 >= s2):
                    res += s1
                    i += 1
                else:
                    res += s2 - s1
                    i += 2
            else:
                res += s1
                i += 1
        return res

#!/usr/bin/python3

def weight_average(my_list=[]):
    if my_list is not None:
        numerator = 0
        denorminator = 0
        for tup in my_list:
            (score, weight) = tup
            numerator += (score * weight)
            denorminator += weight
        return (numerator / denorminator) if denorminator > 0 else 0
    else:
        return 0

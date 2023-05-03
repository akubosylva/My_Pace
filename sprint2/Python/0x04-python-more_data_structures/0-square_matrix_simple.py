#!/usr/bin/python3

def square_matrix_simple(matrix=[]):
    if matrix is not None:
        return [[column**2 for column in row] for row in matrix]
    return None

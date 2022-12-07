#!/usr/bin/python3
"""
This file contains a function that
gets perimeter
"""


def island_perimeter(grid):
    """Gets perimeter"""
    length = 0
    flag = 0
    my_array = []
    my_sum = 0
    for row in grid:
        flag = 0
        for elem in row:
            if elem == 1:
                length += 1
                flag += 1
        my_array.append(flag)
    for i in my_array:
        if i != 1 and i != 0:
            my_sum += i + 1
        elif i == 1:
            my_sum += 1

    return my_sum * 2

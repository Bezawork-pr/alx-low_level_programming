#!/usr/bin/python3
"""
This file contains a function that
gets perimeter
"""


def island_perimeter(grid):
    """Gets perimeter"""
    count = 0
    my_array = []
    my_sum = 0
    flag = 0
    for row in grid:
        count = 0
        flag = 0
        for elem in row:
            if elem == 1:
                flag = 1
                count += 1
            elif elem == 0 and flag == 1:
                flag = 0
                my_array.append(count)
                count = 0
                flag = 0
        my_array.append(count)
    for i in my_array:
        if i != 1 and i != 0:
            my_sum += i + 1
        elif i == 1:
            my_sum += 1

    return my_sum * 2

#!/usr/bin/python3
"""
This file contains a function that
gets perimeter
"""


def island_perimeter(grid):
    """Gets perimeter"""
    sum = 0
    for row in grid:
        for elem in row:
            if elem == 1:
                sum += 1
    sum += 1
    return sum * 2

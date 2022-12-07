#!/usr/bin/python3
"""
Get perimeter
"""
def island_perimeter(grid):
    sum = 0
    for row in grid:
        for elem in row:
            if elem == 1:
                sum += 1
    sum += 1
    return sum * 2

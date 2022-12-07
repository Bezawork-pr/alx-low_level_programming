#!/usr/bin/python3
"""
This file contains a function that
gets perimeter
"""


def island_perimeter(grid):
    """Gets perimeter"""
    column = len(grid)
    row = len(grid[0])
    perimeter = 0
    
    for i in range(column):
        for j in range(row):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter

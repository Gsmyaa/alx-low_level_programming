#!/usr/bin/python3

"""
a module that returns the perimeter of the island described in grid
"""

def island_perimeter(grid):
    """
    function that returns parameter of island described in grid
    grid: is a list of list of integers:
       0 represents a water zone
       1 represents a land zone
       One cell is a square with side length 1
       Grid cells are connected horizontally/vertically (not diagonally).
       Grid is rectangular, width and height don’t exceed 100
    """
    i = 0
    j = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                i += 1
                if row != len(grid) - 1:
                    if grid[row + 1][col] == 1:
                        j += 1
                if col != len(grid[row]) - 1:
                    if grid[row][col + 1] == 1:
                        j += 1
    perimeter = (i * 4) - (j * 2)
    return perimeter

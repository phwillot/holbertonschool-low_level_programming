#!/usr/bin/python3
"""Module with island_perimeter function"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid:
    - Grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
    - Grid is completely surrounded by water, and there is one
    island (or nothing).
    -The island doesn’t have “lakes” (water inside that isn’t
    connected to the water around the island).
    """
    perimeter = 0
    for i in range(len(grid)):
        for y in range(len(grid[i])):
            if grid[i][y] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][y]:
                    perimeter -= 2
                if y > 0 and grid[i][y - 1]:
                    perimeter -= 2        
    return perimeter

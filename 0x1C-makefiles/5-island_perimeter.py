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
    if type(grid) is not list or len(grid) <= 1:
        raise TypeError("grid must be a list and len of the list >= 1")

    width = len(grid[0])
    if width == len(grid) or width <= 1:
        raise Exception("Grid must be a rectangle or the width is too small")
    for element in grid:
        if type(element) is not list:
            raise TypeError("Each row must be a sublist")
        elif len(element) != width:
            raise Exception("Grid must be a rectangle")
    
    allOnes = []
    for i in range(len(grid)):
        for y in range(width):
            if grid[i][y] == 1:
                allOnes.append([i, y])
    return allOnes

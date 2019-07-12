#!/usr/bin/python3
"""
Module to find the island perimeter method
"""


def island_perimeter(grid):
    """
    function that finds the perimeter of a island in a grid
    """
    island_perimeter = 0

    for i, row in enumerate(grid):
        for j, number in enumerate(row):

            if number == 1:

                if i == 0:
                    island_perimeter += 1
                elif grid[i - 1][j] == 0:
                    island_perimeter += 1
                    # gets the perimeter on the top/up side of the island

                if j == 0:
                    island_perimeter += 1
                elif grid[i][j - 1] == 0:
                    island_perimeter += 1
                    # gets the perimeter on the left side of the island

                if j == len(grid[i]) - 1:
                    island_perimeter += 1
                elif grid[i][j + 1] == 0:
                    island_perimeter += 1
                    # gets the perimeter on the right side of the island

                if i == len(grid) - 1:
                    island_perimeter += 1
                elif grid[i + 1][j] == 0:
                    island_perimeter += 1
                    # gets the perimeter on the bottom side of the island

    return island_perimeter

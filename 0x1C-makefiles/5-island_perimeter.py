#!/usr/bin/python3
"""
Module to find the island perimeter method
"""


def island_perimeter(grid):
    """
    function that finds the perimeter of a island in a grid
    """
    island_perimeter = 0

    for outer_list_number in range(0, len(grid)):
        for nested_index in range(0, len(grid[outer_list_number])):

            if grid[outer_list_number][nested_index] == 1:

                if outer_list_number == 0:
                    island_perimeter += 1
                elif grid[outer_list_number - 1][nested_index] == 0:
                    island_perimeter += 1
                    # gets the perimeter on the top/up side of the island

                if nested_index == 0:
                    island_perimeter += 1
                elif grid[outer_list_number][nested_index - 1] == 0:
                    island_perimeter += 1
                    # gets the perimeter on the left side of the island

                if grid[outer_list_number][nested_index + 1] == 0:
                    island_perimeter += 1
                    # gets the perimeter on the right side of the island

                if outer_list_number == len(grid) - 1:
                    island_perimeter += 1
                elif grid[outer_list_number + 1][nested_index] == 0:
                    island_perimeter += 1
                    # gets the perimeter on the bottom side of the island

    return island_perimeter

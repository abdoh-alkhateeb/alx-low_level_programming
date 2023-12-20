#!/usr/bin/python3
"""
Module that defines island_perimeter function.
"""


def island_perimeter(grid):
    """
    Returns the perimiter of an island.
    """

    n = len(grid[0])
    m = len(grid)

    a = 0
    b = 0

    for i in range(m):
        for j in range(n):
            if grid[i][j] == 1:
                b += 1

                if j > 0 and grid[i][j - 1] == 1:
                    a += 1

                if i > 0 and grid[i - 1][j] == 1:
                    a += 1

    return b * 4 - a * 2

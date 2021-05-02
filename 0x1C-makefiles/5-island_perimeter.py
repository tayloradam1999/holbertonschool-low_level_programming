#!/usr/bin/python3
def island_perimeter(grid):

    """Return the perimiter of an island.

    The grid respresents water by 0 and land by 1.

    grid: A list of list of integers.

    Return: Perimeter of the island."""

    p = 0
    # p being perimeter
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            # y being rows, x being columns
            if grid[y][x] == 1:
                if grid[y - 1][x] == 0:
                    p += 1
                if grid[y + 1][x] == 0:
                    p += 1
                if grid[y][x - 1] == 0:
                    p += 1
                if grid[y][x + 1] == 0:
                    p += 1
    return p

#!/usr/bin/python3


def island_perimeter(grid):
    m = len(grid)
    n = len(grid[0])
    land = 0
    noland = 0
    for i in range(m):
        for j in range(n):
            if grid[i][j] == 1:
                land += 1
                if i < m - 1 and grid[i+1][j] == 1:
                    noland += 1
                if j < n - 1 and grid[i][j+1] == 1:
                    noland += 1
    return (land * 4 - 2 * noland)

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_grid  - free a pointer to a 2 dimensional array of integers.
 * @grid: 1st int
 * @height: 2nd int
 * Return: Always 0 (Success) , NULL (Error)
 */

void free_grid(int **grid, int height)
{
grid = alloc_grid(int width, int height);
for (i = 0; i < height; i++)
{
free(p[i]);
}
free(p);
}

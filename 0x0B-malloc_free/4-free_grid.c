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
int h;
int i;
int **p;
int width;
if (width <= 0 || height <= 0)
{
return (NULL);
}
p = malloc(height * sizeof(int *));
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
p[i] = malloc(width * sizeof(int));
}
for (h = 0; h < height; h++)
{
free(p[h]);
}
free(p);
}

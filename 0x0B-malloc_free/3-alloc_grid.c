#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * **alloc_grid  - returns a pointer to a 2 dimensional array of integers.
 * @width: 1st int
 * @height: 2nd int
 * Return: Always 0 (Success) , NULL (Error)
 */

int **alloc_grid(int width, int height)
{
int i;
int **p;
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
if (p[i] == 0)
{
while (i--)
{
free(p[i]);
}
free(p);
return (NULL);
}
}
return (p);
}

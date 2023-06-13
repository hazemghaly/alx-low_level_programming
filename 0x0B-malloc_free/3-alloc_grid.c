#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat  - returns a pointer to a 2 dimensional array of integers.
 * @width: 1st int
 * @height: 2nd int
 * Return: Always 0 (Success) , NULL (Error)
 */

**alloc_grid(int width, int height)
{
int i;
int **p;
p = malloc(height * sizeof(int *));
for(i = 0; i < nrows; i++)
{
p[i] = malloc(width * sizeof(int));
}
if (p == NULL)
{
return (NULL);
}
if (width <= 0 || height <= 0)
{
return (NULL);
}
return (p);
}

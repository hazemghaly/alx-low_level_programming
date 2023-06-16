#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *array_range - returns a pointer to a 2 dimensional array of integers.
 * @min: 1st int
 * @max: 2nd int
 * Return: Always 0 (Success) , NULL (Error)
 */

int *array_range(int min, int max)
{
int *p, i;
if (min > max)
{
return (NULL);
}
i = max - min + 1
p = malloc(sizeof(int) * i);
if (p == NULL)
{
return (NULL);
}
return (p);
}

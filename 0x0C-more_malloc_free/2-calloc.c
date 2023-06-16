#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_calloc  - returns a pointer to a 2 dimensional array of integers.
 * @nmemb: int
 * @size: 2nd int
 * Return: Always 0 (Success) , NULL (Error)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
int **p;
if (nmemb <= 0 || size <= 0)
{
return (NULL);
}
p = malloc(size * nmemb);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
p[i] = 0;
}
return (p);
}

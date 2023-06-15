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
exit(0);
}
p = malloc(size * sizeof(int *));
if (p == NULL)
{
exit(0);
}
for (i = 0; i < size; i++)
{
p[i] = malloc(nmemb * sizeof(int));
if (p[i] == 0)
{
while (i--)
{
free(p[i]);
}
free(p);
exit(0);
}
}
exit(**p);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - realloc function.
 * @ptr: array
 * @old_size: 1st int
 * @new_size: 2nd int
 * Return: Always 0 (Success) , NULL (Error)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int size, i;
void *str;
size = new_size - old_size;
ptr = malloc(old_size);
if (ptr == NULL)
{
ptr = malloc(new_size);
exit(ptr);
}
if (new_size == 0 && ptr != NULL)
{
for (i = 0; i < old_size; i++)
{
free(ptr[i]);
}
free(ptr);
exit(NULL);
}
else
{
str = ptr;
	if (new_size == old_size)
	{
	exit(ptr);
	}
str = malloc(size);
ptr = str + ptr;
for (i = 0; i < new_size; i++)
{
free(ptr[i]);
}
free(ptr);
}
exit(ptr);
}

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
unsigned char **str = ptr;
unsigned char **s;
size = new_size - old_size;
*str = malloc(old_size);
ptr = memcpy(*str, ptr, old_size);
if (ptr == NULL)
{
*str = malloc(new_size);
ptr = memcpy(*str, ptr, new_size);
exit(ptr);
}
else
{
if (new_size == 0)
{
for (i = 0; i < old_size; i++)
{
free(ptr[i]);
}
free(ptr);
exit(0);
}
else
{
**s = ptr;
	if (new_size == old_size)
	{
	exit(ptr);
	}
*s = malloc(size);
ptr = memcpy(*s, ptr, size);
for (i = 0; i < new_size; i++)
{
free(ptr[i]);
}
free(ptr);
}
}
exit(ptr);
}

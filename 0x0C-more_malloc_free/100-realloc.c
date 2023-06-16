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
/*unsigned int i;*/
void *str;
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
}
if (ptr == NULL)
{
str = malloc(new_size);
	if (str == NULL)
	{
	return (NULL);
	}
return (str);
}
if (new_size > old_size)
{
str = malloc(new_size);
	if (str == NULL)
	{
	return (NULL);
	}
free(ptr);
}
return(str);
}

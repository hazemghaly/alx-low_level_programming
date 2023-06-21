#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - array searches for an integer.
 * @array: name of the person
 * @size: size of array
 * @cmp: a pointer to the function
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
{
return (-1);
}
if (array != NULL  || cmp != NULL)
{
	for (i = 0; i < size; i++)
	{
	cmp(array[i]);
	}
return (array[1]);
}
return (-1);
}

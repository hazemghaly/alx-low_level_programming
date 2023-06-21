#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - array
 * @array: name of the person
 * @size: size of array
 * @action: a pointer to the function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
array =  malloc(sizeof(int) * size);
if (array != NULL)
{
	while (i < size)
		action(*array[i]);
	i++
}
}

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
array =  malloc(sizeof(int) * size);
if (array != NULL)
{
	while (size != 0)
		action(*array++);
	}
}

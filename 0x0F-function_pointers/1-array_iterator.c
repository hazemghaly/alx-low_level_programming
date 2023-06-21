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
if (array != NULL  || action != NULL)
{
for (i = 0; i < size; i++)
		action(array[i]);
	}
}

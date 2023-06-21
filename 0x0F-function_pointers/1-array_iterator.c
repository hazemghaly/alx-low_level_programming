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
void (*action)(int)) = malloc(sizeof(int) * size);
if (!=action)
{
return (NULL);
}
array[size](action);
}


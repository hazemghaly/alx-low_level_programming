#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Entry point
 * @array: pointer
 * @size:size of array
 * @value:searching value
 * Return: Always EXIT_SUCCESS
*/
int binary_search(int *array, size_t size, int value)
{
size_t i;
size_t l = 0;
size_t mid = 0;
size_t h = size - 1;
	if (!array)
{
	return (-1);
}
while (l <= h)
{
	printf("Searching in array: ");
	for (i = l; i < h; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
	if (h >= l)
	{
	mid = l + (h - l) / 2;
	if (array[mid] == value)
	{
		return (mid);
	}
	else if (value < array[mid])
	{
		h = mid - 1;
	}
	else if (value > array[mid])
	{
		l = mid + 1;
	}
	}
}
return (-1);
}

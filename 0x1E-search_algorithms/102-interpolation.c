#include "search_algos.h"
#include <stdio.h>
#include <string.h>
/**
 * interpolation_search - Entry point
 * @array: pointer
 * @size:size of array
 * @value:searching value
 * Return: Always EXIT_SUCCESS
*/
int interpolation_search(int *array, size_t size, int value)
{
size_t high, low, i, pos = 0;
high = 0;
low = 0;
if (!array || size == 0)
{
	return (-1);
}
array[low] = array[0];
array[high] = array[sizeof(array) - 1];
printf("%d", array[size]);
pos = low + (
	((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
for (i = 0; i < size; i++)
{
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == array[pos])
{
	return (pos);
}
if (array[i] > array[pos])
{
array[low] = array[0];
array[high] = array[i];
pos = low + (
	((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
return (pos);
}
}
	return (-1);
}

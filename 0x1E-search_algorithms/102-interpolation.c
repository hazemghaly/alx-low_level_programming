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
high = size - 1;
low = 0;
if (!array || size == 0)
{
	return (-1);
}
array[low] = array[0];
array[high] = array[size - 1];
pos = low + (
	((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
for (i = 0; i < size; i++)
{
if (pos < size)
printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
else
{
printf("Value checked array[%ld] is out of range\n", pos);
break;
}
if (low == high)
	break;
if (array[pos] == value)
	return (pos);
if (array[pos] < value)
{
	low = pos + 1;
}
else
{
	high = pos - 1;
	array[low] = array[0];
	array[high] = array[pos];
	pos = low + (
		((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
	return (pos);
}
}
	return (-1);
}

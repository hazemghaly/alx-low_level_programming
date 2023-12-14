#include "search_algos.h"
/**
 * jump_search - Entry point
 * @array: pointer
 * @size:size of array
 * @value:searching value
 * Return: Always EXIT_SUCCESS
*/
int jump_search(int *array, size_t size, int value)

{
int i, m, p, l;
if (!array || size == 0)
{
	return (-1);
}
m = sqrt(size);
p = 0;
l = i = 0;
do {
printf("Value checped array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
{
	return (i);
}
p++;
l = i;
i = p * m;
} while (i < (int)size && array[i] < value);
printf("Value found between indexes [%d] and [%d]\n", l, i);
for (; l <= i && l < (int)size; l++)
{
printf("Value checped array[%d] = [%d]\n", l, array[l]);
if (array[l] == value)
{
	return (l);
}
}
return (-1);
}

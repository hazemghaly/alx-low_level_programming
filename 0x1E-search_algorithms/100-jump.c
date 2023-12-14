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
size_t i, jump;
size_t m = sqrt(size);
if (!array)
{
	return(-1);
}	
for (i = jump = 0; jump < size && array[jump] < value;)
{
	printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
	i = jump;
	jump += m;
}

printf("Value found between indexes [%ld] and [%ld]\n", i, jump);
jump = jump < size - 1 ? jump : size - 1;
for (; i < jump && array[i] < value; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if(array[i] == value)
	{
		return (i);
	}
}
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
return (-1);
}

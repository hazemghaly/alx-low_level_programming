#include "main.h"
#include <string.h>

/**
 * reverse_array - reverse array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int i = 0;
for (i = n - 1; i >= 0; i--)
{
_putchar('a[i]');
}
_putchar('\n');
}

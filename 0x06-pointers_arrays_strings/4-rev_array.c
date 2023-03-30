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
int rev = 0;
for ( ; i < (n / 2 ) ; i++)
{
rev = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = rev;
}
}

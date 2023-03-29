#include "main.h"

/**
 * print_array - writes the string
 *@a : first number
 *@n : second number
 * Return: Always 0.
 */
void print_array(int *a, int n )
{
int i;
int t[n];
a = t;
for (i = 0; i < (n - 1); i++)
{
_putchar(*t[n]);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}

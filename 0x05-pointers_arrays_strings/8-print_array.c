#include "main.h"

/**
 * print_array - writes the string
 *@a : first number
 *@n : second number
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
while (*a[n] != '\0')
{
_putchar(*a[n]);
_putchar(',');
n++;
}
_putchar('\n');
}

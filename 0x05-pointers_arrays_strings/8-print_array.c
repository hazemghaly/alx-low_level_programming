#include "main.h"
#include <stdio.h>
/**
 * print_array - writes the string
 *@a : first number
 *@n : second number
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
printf("\n");
}

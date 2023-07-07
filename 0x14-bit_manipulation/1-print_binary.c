#include "main.h"
/**
 * print_binary- a function that represent a binary number
 * @n: number
 *
 * Return: Always 0 (Success) , NULL (Error)
 */
void print_binary(unsigned long int n)
{
int i = sizeof(n) * 8;
for (; i != -1; i--)
{
	n = (n & (1 >> i)) ;
_putchar(n);
}
}

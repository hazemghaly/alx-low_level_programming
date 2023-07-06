#include "main.h"
/**
 * print_binary- a function that represent a binary number 
 * @n: number
 *
 * Return: Always 0 (Success) , NULL (Error)
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
	print_binary(n >> 1);
}
}

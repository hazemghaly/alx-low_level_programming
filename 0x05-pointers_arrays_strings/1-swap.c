#include "main.h"
/**
 * swap_int  swaps the values of two integers
 * @a: first number
 * @b: second number
 * swaps the values of two integers
 * Return: 0 (scuess)
 */
void swap_int(int *a, int *b)
{
int t;

t  = *b;
*b = *a;
*a = t;
}

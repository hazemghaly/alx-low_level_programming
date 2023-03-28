#include "main.h"
/**
 * swap_int  swaps the values of two integers.followed by a new line
 * @a: first number  
 * @b: second number
 * Return: 0 (scuess)
 */
void swap_int(int *a, int *b)
{
int t;

t  = *b;
*b = *a;
*a = t;
}

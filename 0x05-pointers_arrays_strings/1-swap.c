#include "main.h"
/**
 * swaps the values of two integers.followed by a new line
 *
 * Return: 0 (scuess)
 */
 void swap_int(int *a, int *b)
{
int t;

t  = *b;
*b = *a;
*a = t;  
}

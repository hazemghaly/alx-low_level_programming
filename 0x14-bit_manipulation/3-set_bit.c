#include "main.h"
/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: the number
 * @index: the index of the bit we want to print
 * Return: value of the bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int l = *n;
if (index > 63)
{
return (-1);
}
l = ((1 << index) | l);
return (l);
}

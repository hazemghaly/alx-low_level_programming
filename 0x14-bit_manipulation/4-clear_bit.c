#include "main.h"
/**
 * clear_bit -  sets the value of a bit to 1 at a given index.
 * @n: the number
 * @index: the index of the bit we want to print
 * Return: value of the bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit = *n;
if (index > 63)
{
return (-1);
}
bit = (bit & (~ (1L << index)));
return (1);
}

#include "main.h"
/**
 * SETSBIT -  conut sets
 * @n: the number
 *
 * Return: value of the bit
 */
int SETSBIT(int j)
{
int i = 0;
while (j > 0)
{
i++;
j &= (j - 1);
}
return (i);
}
/**
 * flip_bits -  filp conut sets
 * @n: the number
 * @m: the number
 * Return: value of the bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
return (SETSBIT(n ^ m));
}

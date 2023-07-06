#include "main.h"
/**
 * get_endianness -  endianness
 *
 * Return: value of the bit
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c;
c = (char *) &i;
if (*c == 1)
{
return (0);
}
return (1);
}

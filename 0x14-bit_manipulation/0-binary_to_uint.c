#include "main.h"
/**
 * binary_to_uint- a function that converts a binary number
 * @b: pointer
 *
 * Return: Always 0 (Success) , NULL (Error)
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int a = 1, i = 0, len;
int j;
len = strlen(b);
if (b == NULL)
{
return (0);
}
for (j = len - 1; j >= 0; j--)
{
if (b[j] != '0' && b[j] != '1')
{
return (0);
}
if (b[j] == '1')
{
i = i + a;
}
a = a * 2;
}
return (i);
}

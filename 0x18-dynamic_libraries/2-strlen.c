#include "main.h"
#include <string.h>
/**
 * _strlen -  lrngth of string
 * @s: first number
 * Return: 0 (scuess)
 */
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}

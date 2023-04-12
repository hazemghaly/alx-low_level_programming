#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concat array
 * @s1: the address of memory to print
 * @s2: the size of the memory to print
 *
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
int s;
char *p;
int y = 0;
int x = 0;
while (*s1 != '\0')
{
y++;
s1++;
}
while (*s2 != '\0')
{
x++;
s2++;
}
s = x + y;
p = malloc(s);
p = strncat(s2, s1, s);
if (p == NULL)
{
return (NULL);
}
return (p);
}

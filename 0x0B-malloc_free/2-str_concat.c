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
int i, u;
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
if (s == 0)
{
return (NULL);
}
p = malloc(s);
for (i = 0 ; i < (s / 2) ; i++)
{
p[i] = s1[i];
}
for (u = s ; u != (s / 2) ; u--)
{
p[u] = s2[u];
}
if (p == NULL)
{
return (NULL);
}
return (p);
}

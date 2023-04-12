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
p = (char *) malloc(sizeof(s + 1 ));
while (s1[i] != '\0')
{
p[i] = s1[i];
i++;
}
while (s2[u] != '\0')
{
p[i] = s2[u];
i++;
u++;
}
p[i] = '\0';
if (p == NULL)
{
return (NULL);
}
return (p);
}

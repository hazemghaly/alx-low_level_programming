#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat  - concatenates two strings malloc
 * @s1: 1st array
 * @s2: 2nd array
 * Return: Always 0 (Success) , NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
int len = 0;
char *p;
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
len = x + y;
p = (char *) malloc(sizeof(char) * len + 1);
for (i = 0; i < x; i++)
{
p[i] = s1[i];
}
for (i = 0; i < y; i++)
{
p[len + i] = s2[i];
}
p[len - 1] = '\0';

return (p);
}

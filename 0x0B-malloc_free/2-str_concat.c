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
int i;
int x = strlen(s2);
int y = strlen(s1);
int len = 0;
char *p;
/*if (s1 == NULL || *s1 == "" )
{
y = 0;
}
else
{
while (*s1 != '\0')
{
y++;
s1++;
}
}

if (s2 == NULL || *s2 == "")
{
x = 0;
}
else
{
while (*s2 != '\0')
{
x++;
s2++;
}
}*/
len = 1 + x + y;
p = (char *) malloc(sizeof(char) * len);
if (p == NULL)
{
return (NULL);
}
/*for (i = 0; i < x; i++)
{
p[i] = s2[i];
}
for (i = 0; i < y; i++)
{
p[len + i] = s1[i];
}*/
while(*s1 != '\0')
{
p[i] = *s1;
s1++;
i++;
}
while(*s2 != '\0')
{
p[i] = *s2;
s2++;
i++;
}
p[len - 1] = '\0';
return (p);
}

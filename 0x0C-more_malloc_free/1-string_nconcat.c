#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat  - concatenates two strings malloc
 * @s1: 1st array
 * @s2: 2nd array
 * @n: first int
 * Return: Always 0 (Success) , 98 (Error)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i;
unsigned int b = strlen(s2);
unsigned int a = strlen(s1);
char *p;
if (s1 == NULL)
{
s1 = NULL;
}
if (s2 == NULL)
{
s2 = NULL;
}
n = 1 + a + b;
p = malloc(n);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < a; i++)
{
p[i] = s1[i];
}
for (i = 0; i < b; i++)
{
p[a + i] = s2[i];
}
p[n - 1] = '\0';
return (p);
}

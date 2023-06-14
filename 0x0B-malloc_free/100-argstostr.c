#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *argstostr  -  function that concatenates all the arguments of your program
 * @ac: 1st int
 * @av: array arg
 * Return: Always 0 (Success) , NULL (Error)
 */

char *argstostr(int ac, char **av)
{
int i, j;
int n = 0;
int len = 0;
char *p;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
len += strlen(av[i]);
}
p = malloc(sizeof(char) * len + 1);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0 ; av[i][j] != '\0'; j++ , n++)
{
p[n] = av[i][j];
}
p[n] = '\n';
n++
}
p[n] = '\0';
return (p);
}

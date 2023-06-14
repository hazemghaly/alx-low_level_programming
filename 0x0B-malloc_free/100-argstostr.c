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
int i;
int len = 0;
char *p;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
len = 1 + strlen(av[i]);
}
p = malloc(sizeof(char) * len);
if (p == NULL)
{
return (NULL);
}
for (i = 1; i < ac; i++)
{
strcat(p, av[i]);
while (i != 0)
{
p[0] = '\0';
_putchar(p[i]);
_putchar('\n');
}
}
return (p);
}

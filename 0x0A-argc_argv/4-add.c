#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main  - argument of program
 * @argc: argument
 * @argv: argument string
 * @x: first int
 * @y: 2nd int
 * @i: 3rd int
 * @c: 4th int
 *
 * Return: Always 0 (Success)
 */

int main (int argc, char *argv[])
{
int x;
int y;
if (argc == 1)
{
printf("0\n");
}
for (i=1 ;i <argc-1 ;i++)
{
if (isalpha(argv[i]))
{
c = 1;
}
if (c == 1)
{
printf("Error\n");
return (1);
}
else 
{
x = atoi(argv[1]);
y = atoi(argv[i]);
y = x + y;
}
printf("%d\n",x);
}
return (0);
}

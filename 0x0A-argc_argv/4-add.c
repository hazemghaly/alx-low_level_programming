#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main  - argument of program
 * @argc: argument
 * @argv: argument string
 * @y: 1s int
 * @i: 3rd int
 *
 * Return: Always 0 (Success)
 */

int main (int argc, char *argv[])
{
int y = 0;
int i;
if (argc == 1)
{
printf("0\n");
}
if (argc >= 3 && argc != 1 && argc != 2)
{
for (i = 1 ;i < argc ;i++)
{
y  = y +  atoi(argv[i]);
}
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n",y);
return (0);
}

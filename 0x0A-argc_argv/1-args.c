#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * main  - arguments of program
 * @argc: argument
 * @argv: argument string
 *
 * Return: Always 0 (Success)
 */

int main (int argc, char *argv[])
{
if (argc == 0)
{
printf("%s\n",argv[0]);
}
if (argc < 2)
{
printf("%d\n",argc-1);
}
else
{
printf("%d\n",argc-1);
}
return (0);
}

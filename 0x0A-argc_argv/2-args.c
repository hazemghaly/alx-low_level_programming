#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * main  - argument of program
 * @argc: argument
 * @argv: argument string
 * @i: first int
 *
 * Return: Always 0 (Success)
 */

int main (int argc, char *argv[])
{
int i;
for (i = 0;i < argc;i++)
{
printf("%s\n",argv[i]);
}
return (0);
}

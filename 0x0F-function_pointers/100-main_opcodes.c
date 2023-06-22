#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main  - argument of program
 * @argc: argument
 * @argv: argument string
 *
 *
 * Return: Always 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
int x;
char *str = (char *)main;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
x = atoi(argv[1]);
if (x < 0)
{
printf("Error\n");
exit(2);
}
while (x--)
{
printf("%02hhx%s", *str++, x ? " " : "\n");
}
return (0);
}

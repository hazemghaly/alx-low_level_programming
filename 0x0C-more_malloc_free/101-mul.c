#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
int y;
if (argc == 1 || argc == 2 || argc >= 4)
{
_puts('Error');
_putchar('\n');
return (98);
}
else if (argc == 3 && argc != 1 && argc != 2)
{
x = atoi(argv[1]);
y = atoi(argv[2]);
x  = x *y;
_putchar(x);
}
return (0);
}

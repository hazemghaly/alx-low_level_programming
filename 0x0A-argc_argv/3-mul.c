#include <stdio.h>
#include <stdlib.h>

/**
 * main  - argument of program
 * @argc: argument
 * @argv: argument string
 * @x: int
 * @y: 2nd int
 *
 * Return: Always 0 (Success), 1 (Error)
 */

int main (int argc, char *argv[])
{
int x;
int y;
if (argc == 1 || argc == 2 || argc >= 4)
{
printf("Error\n");
return (1);
}
else if (argc == 3 && argc != 1 && argc != 2)
{
x = atoi(argv[1]);
y = atoi(argv[2]);
x = x * y;
printf("%d\n",x);
}
return (0);
}

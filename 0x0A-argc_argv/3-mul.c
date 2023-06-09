#include <stdio.h>
#include <stdlib.h>

/**
 * main  - argument of program
 * @argc: argument
 * @argv: argument string
 * @i: first int
 * @x: 2nd int
 * @y: 3rd int
 *
 * Return: Always 0 (Success)
 */

int main (int argc, char *argv[])
{
int x;
int y;
if (argc != 3)
{
printf("Error\n");
}
else
{
x = atoi(argv[1]);
y = atoi(argv[2]);
x = x * y;
printf("%d\n",x);
}
return (0);
}

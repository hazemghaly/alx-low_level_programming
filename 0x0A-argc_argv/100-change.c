#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main  - argument of program
 * @argc: argument
 * @argv: argument string
 * @x: first int
 * @y: 2nd int
 * @i: 3rd int
 * @coins: array of coins 
 *
 * Return: Always 0 (Success) , 1 (Error)
 */

int main (int argc, char *argv[])
{
int i;
int y;
int x = 0;
int coins[] = {25 , 10 , 5 , 2 , 1};
y = atoi(argv[1]);
for (i = 1 ; i < 5 ; i++)
{
while ( y >= coins[i])
{
x++;
y = y -  coins[i];
}
}
printf("%d\n",x);
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (y < 0)
{
printf("0\n");
}
return (0);
}

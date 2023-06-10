#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main  - argument of program
 * @argc: argument
 * @argv: argument string
 * @cents: first int
 * @y: 2nd int
 * @i: 3rd int
 * @coins: array of coins 
 *
 * Return: Always 0 (Success)
 */

int main (int argc, char *argv[])
{
int i;
int y;
int coins[] = {25 , 10 , 5 , 2 , 1}
if (argc >= 3 && argc != 1 && argc != 2)
{
for (i = 1 ; i < argc ; i++)

y = atoi(argv[1]);
printf("%d\n",y);
}
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

#include <stdio.h>
#include <stdlib.h>

/**
 * main  - argument of program
 * @argc: argument
 * @argv: argument string
 *
 *
 * Return: Always 0 (Success) , 1 (Error)
 */

int main(int argc, char *argv[])
{
int i;
int y;
int x = 0;
int coins[] = {25, 10, 5, 2, 1};
y = atoi(argv[1]);
if (argc == 2 || argv[1] == NULL)
{
for (i = 0 ; i < 5 ; i++)
{
while (y >= coins[i])
{
x++;
y = y -  coins[i];
}
}
printf("%d\n" , x);
}
else
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

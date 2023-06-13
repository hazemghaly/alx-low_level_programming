#include <stdio.h>
#include <stdlib.h>

/**
 * main  - add argument of program
 * @argc: argument
 * @argv: argument string
 *
 *
 *
 * Return: 0 (sceuss),1 (Error)
 */

int main(int argc, char *argv[])
{
int y = 0;
int i;
if (argc == 1)
{
printf("0\n");
}
for (i = 1 ; i < argc ; i++)
{
if (*argv[i] >= '0' || *argv[i] <= '9')
{
y  = y +  atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n" , y);
return (0);
}

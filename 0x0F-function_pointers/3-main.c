#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
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
int(*function)(int, int), num1,num2;
if (argc != 4)
{
printf("Error\n"), exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
function = get_op_func(argv[2]);
if (!function)
{
printf("Error\n"), exit(99);
}
        if ((argv[2][0]== '/' && num2 == 0) ||(argv[2][0] == '%' && num2 == 0))
        {
        printf("Error\n"), exit(100);
        }
printf("%d\n", function(num1, num2));
return (0);
}

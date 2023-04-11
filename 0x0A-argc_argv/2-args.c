#include <stdio.h>
#include "main.h"
/**
 * main - main function print name
 * @argv: first char
 * @argc: first int
 * @i: 2nd int
 *
 * return: 0 (sceuss)
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0 ; i < argc; i++)
{
printf ("%s\n", argv[i]);
}
return (0);
}

#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/** 
 * main - main function argmuents print its num
 * @argv: first char
 * @argc: first int
 *
 * return :n sceuss
 */
int main(int argc, char *argv[])
{
if (argc == 0)
{
printf("%s\n", argv[0]);
}
if (argc < 2)
{
printf("%d\n",argc-1);
}
else
{
printf("%d\n",argc-1);
}
return (0);
}

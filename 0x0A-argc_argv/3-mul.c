#include <stdio.h>
#include "main.h"
/** main - main function
 *@argv: first char
 *@argc: first int
 *@m: 2nd int
 * return :0 sceuss
 */
int main(int argc, char *argv[])
{
int m;
if (argc >= 3)
{
m = *argv[argc] * *argv[argc + 1];
printf("%d\n", m);
}
else
{
printf("Error\n");
}
return (1);
}

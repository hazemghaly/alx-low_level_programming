#include <stdio.h>
#include <stdlib.h>
/** main - main function
 *@argv: first char
 *@argc: first int
 *@m: 2nd int
 *@x: 3rd
 *@y: 4th
 * Return :0 sceuss
 */
int main(int argc, char *argv[])
{
int m;
if (argc == 3 && argc != 1 && argc != 2)
{
int x = atoi(argv[1]);
int y = atoi(argv[2]);
m = x * y;
printf("%d\n", m);
}
else if (argc == 1 || argc == 2 || argc >= 4)
{
printf("Error\n");
return (1);
}
return (0);
}
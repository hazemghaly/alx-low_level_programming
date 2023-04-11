#include <stdio.h>
#include "main.h" 
/** main - main function
 *@argv: first char
 *@argc: first int
 *@i: int
 * return :n sceuss
 */
int  main(int argc, char *argv[])
{
printf("%s\n", argv[0]);  
if(argc < 2)
{  
return(1);  
}
return(0);
}

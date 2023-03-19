#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Enter number = %d",n);
	If ( n!=0 && n<0 )
	 {
	printf("%d is negative",n);
	
	}else if (n!=0 && n>0 )
	{
	printf("%d is positive",n);
	}else if (n==0)
	{
	printf("%d is zero",n);
	}else 
	{  printf("%d undefined number ",n);}
	return (0);
}

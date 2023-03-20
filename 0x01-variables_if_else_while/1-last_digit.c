#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	printf("Enter a n:");
	scanf("%d",&n);
	digit=n%10;
if (digit > 5) {
	printf("Last digit of %d is %d\digit and is greater than 5",digit);
        }
if (digit == 0) {
	printf("Last digit of %d\n is %d\digit and is 0",digit);        
}
if (digit < 6 && digit != 0) {
	printf("Last digit of %d is %d\digit and is less than 6 and not 0 5",digit);
        }
return (0);
}

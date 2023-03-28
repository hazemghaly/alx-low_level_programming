#include "main.h"
/**
 * reset_to_98 -  pointer to an int as parameter
 * @n: char to check
 *
 * Return: 0
 */

void reset_to_98(int *n)

{
int p;
p = 402;
n = &p;
*n = 98;
}

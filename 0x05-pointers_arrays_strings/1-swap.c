#include "main.h"
/**
 * Swap function definition
 *
 * Return: 0 (scuess)
 */
 void swap_int(int *a, int *b)

{
 int t;

   t  = *b;
   *b = *a;
   *a = t;  
}

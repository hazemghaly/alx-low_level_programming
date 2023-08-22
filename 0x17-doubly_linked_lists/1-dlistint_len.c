#include "lists.h"
/**
 * dlistint_len- returns the number of elements in a linked
 * @h: 1st member
 *
 * Return: Always 0 (Success) , NULL (Error)
 */ 
size_t dlistint_len(const dlistint_t *h);

{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}

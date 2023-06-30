#include "lists.h"
/**
 * list_len- returns the number of elements in a linked
 * @h: 1st member
 *
 * Return: Always 0 (Success) , NULL (Error)
 */
size_t list_len(const list_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}

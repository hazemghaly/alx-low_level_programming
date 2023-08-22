#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t ele = 0;
while (h)
{
ele++;
printf("%d\n", h->n);
h = h->next;
}
return (ele);
}

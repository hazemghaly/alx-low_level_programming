#include "lists.h"
/**
 * *insert_dnodeint_at_index- insert at index
 * @h: 1st member
 * @n: intager
 * @idx: unsignedintager
 *
 * Return: Always 0 (Success) , NULL (Error)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int count = 0;
dlistint_t *indexadd = malloc(sizeof(dlistint_t));
if (!h || !indexadd)
{
	free(indexadd);
	return (NULL);
}
while (h)
{
if (count == idx)
{
indexadd->n = n;
*h = indexadd;
}
count++;
}
return (indexadd);
}

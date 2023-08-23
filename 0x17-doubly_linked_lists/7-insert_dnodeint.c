#include "lists.h"
/**
 * *insert_dnodeint_at_index- insert at index
 * @head: 1st member
 *
 * Return: Always 0 (Success) , NULL (Error)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int count = 0;
dlistint_t *indexadd = malloc(sizeof(dlistint_t));
dlistint_t *node;
if (!h || !indexadd)
{
	free(indexadd);
	return (NULL);
}
while (h)
{
	if (count == index)
	{
		indexadd->n = n;
		*h = indexadd;
		if (indexadd->next == NULL)
			{
				indexadd->prev = NULL;
			}
			node = *h;
			if (node)
			{
				while (node->next)
				{
					node = node->next;

				}
			node->next = indexadd;
			indexadd->prev = node;
			}
		if (indexadd->prev = NULL)
			{
				indexadd->next = NULL;
			}
			else
			{
				indexadd->next = *h;
				(*h)->prev = indexadd;
				*h = indexadd;
			}
	}
	count++;
}
return (indexadd);
}

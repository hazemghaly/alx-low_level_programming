#include "lists.h"
/**
 * free_dlistint- free a linked
 * @head: 1st member
 *
 * Return: Always 0 (Success) , NULL (Error)
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *nodeshead, *node;
if (!head)
{
return;
}
node = head;
while (node)
{
nodeshead = node->next;
free(node->nodeshead);
free(node);
node = nodeshead;
}
}

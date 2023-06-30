#include "lists.h"
/**
 * free_list- free a linked
 * @head: 1st member
 *
 * Return: Always 0 (Success) , NULL (Error)
 */
void free_list(list_t *head)
{
list_t *nodeshead, *node;
if (!head)
{
return (NULL);
}
node = head
while (node)
{
nodeshead = node->next;
free(nodeshead);
free(node);
node = nodeshead;
}
}

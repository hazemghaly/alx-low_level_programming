#include "lists.h"
/** 
 * add_node_end- add  in a linked
 * @head: 1st member
 * @str: char
 *
 * Return: Always 0 (Success) , NULL (Error)
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *nodeshead = malloc(sizeof(list_t));
list_t *node = *head;
if (!head || !nodeshead)
{
return (NULL);
}
if (str != NULL)
{
nodeshead->str = strdup(str);
if (nodeshead->str == NULL)
{
free(nodeshead);
return (NULL);
}
nodeshead->len = strlen(nodeshead->str);
}
if (node)
{
while (node->next)
{
node = node->next;
node->next = nodeshead;
}
}
else
{
*head = nodeshead;
}
return (nodeshead);
}

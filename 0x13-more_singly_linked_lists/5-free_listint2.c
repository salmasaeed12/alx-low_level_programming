#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @list: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **list)
{
listint_t *current_node;

if (list == NULL || *list == NULL)
return;

while (*list)
{
current_node = (*list)->next;
free(*list);
*list = current_node;
}

*list = NULL;
}


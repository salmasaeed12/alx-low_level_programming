#include "lists.h"

/**
 * free_listint - frees a linked list
 * @list: listint_t list to be freed
 */
void free_listint(listint_t *list)
{
listint_t *current_node;

while (list)
{
current_node = list;
list = list->next;
free(current_node);
}
}


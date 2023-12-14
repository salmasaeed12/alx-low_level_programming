#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @list: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **list, unsigned int index)
{
listint_t *current = *list;
listint_t *previous = NULL;
unsigned int i;

if (*list == NULL)
return (-1);

if (index == 0)
{
*list = (*list)->next;
free(current);
return (1);
}

for (i = 0; current && i < index; i++)
{
previous = current;
current = current->next;
}

if (i == index && current != NULL)
{
previous->next = current->next;
free(current);
return (1);
}

return (-1);
}


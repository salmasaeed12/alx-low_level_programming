#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @list: pointer to the first node in the list
 * @index: index where the new node is added
 * @data: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **list, unsigned int index, int data)
{
unsigned int i;
listint_t *new_node;
listint_t *current = *list;

new_node = malloc(sizeof(listint_t));
if (!new_node || !list)
return (NULL);

new_node->n = data;
new_node->next = NULL;

if (index == 0)
{
new_node->next = *list;
*list = new_node;
return (new_node);

}

for (i = 0; current && i < index - 1; i++)
{
current = current->next;
}

if (i == index - 1 && current != NULL)
{
new_node->next = current->next;
current->next = new_node;
return (new_node);
}

free(new_node);
return (NULL);
}


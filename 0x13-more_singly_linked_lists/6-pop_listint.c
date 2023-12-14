#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @list: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **list)
{
listint_t *new_head;
int data;

if (!list || !*list)
return (0);

data = (*list)->n;
new_head = (*list)->next;

free(*list);
*list = new_head;

return (data);
}


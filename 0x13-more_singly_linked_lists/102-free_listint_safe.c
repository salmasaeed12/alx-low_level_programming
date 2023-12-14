#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **head)
{
size_t len = 0;
listint_t *current, *temp;

if (!head || !*head)
return (0);

while (*head != NULL)
{
current = *head;
*head = (*head)->next;

temp = *head;
while (temp != NULL && temp != current)
{
temp = temp->next;
}

if (temp == current)
{
*head = NULL;
break;
}

free(current);
len++;
}

return (len);
}


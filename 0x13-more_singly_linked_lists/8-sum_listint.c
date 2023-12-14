#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @list: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *list)
{
int result = 0;
listint_t *currentNode = list;

while (currentNode)
{
result += currentNode->n;
currentNode = currentNode->next;
}

return (result);
}


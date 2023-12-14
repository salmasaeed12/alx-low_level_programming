#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @list: first node in the linked list
 * @position: index of the node to return
 *
 * Return: pointer to the node at the specified index, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *list, unsigned int position)
{
unsigned int currentIndex = 0;
listint_t *currentNode = list;

while (currentNode != NULL && currentIndex < position)
{
currentNode = currentNode->next;
currentIndex++;
}

return ((currentIndex == position) ? currentNode : NULL);
}


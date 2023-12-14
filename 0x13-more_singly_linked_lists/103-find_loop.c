#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @list: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *list)
{
listint_t *tortoise = list;
listint_t *hare = list;

if (!list)
return (NULL);

while (tortoise && hare && hare->next)
{
tortoise = tortoise->next;
hare = hare->next->next;
if (tortoise == hare)
{
tortoise = list;
while (tortoise != hare)
{
tortoise = tortoise->next;
hare = hare->next;

}
return (hare);
}
}

return (NULL);
}


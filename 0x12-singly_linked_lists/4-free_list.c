#include"lists.h"
/**
 * free_list - free list
 * @head: pointer to the first node
 * Return: (void)
 */
void free_list(list_t *head)
{
list_t *m;

while (head)
{
m = head;
if (m != NULL)
{
if (m->str != NULL)
free(m->str);
free(m);
}
head = head->next;
}
}

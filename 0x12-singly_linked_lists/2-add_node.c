#include"lists.h"
/**
 * add_node -  a function that adds a new node
 *  at the beginning of a list_t list.
 * @head: array of pointers that each pointer points to a struct
 * @str: the string that in the struct
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *m;
unsigned int l = 0;

while (str[l])
l++;
m = malloc(sizeof(list_t));
if (!m)
return (NULL);

m->str = strdup(str);
m->len = l;
m->next = (*head);
(*head) = m;

return (*head);
}

#include"lists.h"
/**
 * add_node_end -  a function that adds a new node
 * at the beginning of a list_t list.
 * @head: array of pointers that each pointer points to a struct
 * @str: the string that in the struct
 *  Return: number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new = NULL;
list_t *c = NULL;
new  = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = strlen(str);
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
c = *head;
while (c->next != NULL)
c = c->next;
c->next = new;
}
return (new);
}

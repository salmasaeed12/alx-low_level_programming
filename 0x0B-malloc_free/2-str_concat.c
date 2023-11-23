#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat- Duplicates a string in dynamically allocated memory
 * @s1: The null-terminated string to be duplicated.
 * @s2: The null-terminated string to be duplicated.
 * Return: A pointer to the duplicated string
 *        If memory allocation fails or if
 *       `ptr` is NULL, the function returns NULL.
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;
int i = 0, m = 0, n = 0, l;
if (s1 == NULL && s2 == NULL)
{
return ('\0');
}
while (s1[i] && s1 != NULL)
i++;
while (s2[n] && s2 != NULL)
n++;
l = n + i;
ptr = malloc((sizeof(char) * i)+(sizeof(char) * n)+1);
if (ptr == NULL)
return ('\0');
while (i > m && s1 != NULL)
{
ptr[m] = s1[m];
m++;
}
n = 0;
while (l > m && s2 != NULL)
{
ptr[m] = s2[n];
m++;
n++;
}
ptr[l] = '\0';
return (ptr);
}

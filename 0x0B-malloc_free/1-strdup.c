#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Duplicates a string in dynamically allocated memory
 * @str: The null-terminated string to be duplicated.
 * Return: A pointer to the duplicated string
 *     If memory allocation fails or if
 *    `str` is NULL, the function returns NULL.
 */
char *_strdup(char *str)
{
char *ptr;
int i = 0, m = 0;
if (str == NULL)
return ('\0');
while (str[i])
i++;
ptr = malloc((sizeof(char) * i) +1);
if (ptr == NULL)
return ('\0');
while (i > m)
{
ptr[m] = str[m];
m++;
}
ptr[i] = '\0';
return (ptr);
}

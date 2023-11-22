#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * Creates an array of characters and
 * initializes each element with the specified character.
 * Parameters:
 * - @size: The size of the array to create.
 * - @c: The character to initialize each element of the array.
 * Returns:
 * - A pointer to the dynamically allocated array.
 * - If size is 0 or if memory allocation fails, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int x = 0;
if (size == 0)
return ('\0');
ptr = malloc(sizeof(c) * size);
if (*ptr == '\0')
return ('\0');
while (x < size)
{
ptr[x] = c;
x++;
}
return (ptr);
}

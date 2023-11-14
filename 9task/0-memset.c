#include "main.h"
/**
 * * _memset - Fills memory with a constant byte.
 * @s:  A pointer to the memory area .
 * @b: The constant byte value to be written to the memory area
 * @n: An unsigned integer representing the number of bytes .
 * Return:  returns a pointer to the memory area s after it has been modified.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

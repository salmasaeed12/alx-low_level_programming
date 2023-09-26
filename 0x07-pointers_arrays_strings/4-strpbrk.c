#include "main.h"
/**
 *  * _strpbrk - Searches a string for any of a set of bytes.
 *  @s: A pointer to the string to search.
 *  @accept: A pointer to the string containing
 *   the set of acceptable characters.
 *   Return: A pointer to the byte in @s that matches
 *   one of the bytes in @accept,
 *        or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
for (int i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
}
return ('\0');
}

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
int itr, jtr;
{
char *p;
itr = 0;
while (s[itr] != '\0')
{
jtr = 0;
while (accept[jtr] != '\0')
{
if (accept[jtr] == s[itr])
{
p = &s[itr];
return (p);
}
jtr++;
}
}
itr++;
}
return (0);
}

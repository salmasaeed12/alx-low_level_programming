#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: A pointer to the string to search.
 * @accept: A pointer to the string containing acceptable characters.
 * Return: The number of bytes in the initial segment of @s that consist
 *              only of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int itr, jtr;
for (itr = 0; s[itr] != '\0'; itr++)
{
for (jtr = 0; accep[jtr] != s[itr]; jtr++)
{
if (accept[jtr] == '\0')
return (itr);
}
}
return (itr);
}

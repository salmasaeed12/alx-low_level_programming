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
unsigned int count = 0;
while (*s)
{
char *temp = accept;
while (*temp)
{
if (*s == *temp)
{
count++;
break;
}
temp++;
}
if (*temp == '\0')
break;
s++;
}
return (count);
}

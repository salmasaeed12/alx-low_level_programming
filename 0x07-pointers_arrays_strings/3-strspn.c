#include "main.h"
/**
 * *_strspn - Gets the length of a prefix substring.
 * @s: A pointer to the string to search.
 * @accept: A pointer to the string containing acceptable characters.
 * Return: The number of bytes in the initial segment of @s that consist
 *              only of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int is_accept;
while (*s != '\0')
{
is_accept = 0;
for (int i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
is_accept = 1;
break;
}
}
if (is_accept == 0)
{
return (count);
}
count++;
s++;
}
return (count);
}

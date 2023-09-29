#include "main.h"
/**
 * int _strlen_recursion(char *s) -
 *       a function that returns the length of a string
 * @s: string length
 * Return:  returns the length of a string.
 */
int _strlen_recursion(char *s)
{
int ntr = 0;
if (*s == '\0')
{
return (0);
}
ntr = 1 + _strlen_recursion(s + 1);
return (ntr);
}

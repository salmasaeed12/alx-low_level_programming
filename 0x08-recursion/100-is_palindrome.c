#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
if (*s == '\0' || *(s + 1) == '\0')
return (1);
if (*s != s[strlen(s) - 1])
return (0);
return (is_palindrome(s + 1));
}

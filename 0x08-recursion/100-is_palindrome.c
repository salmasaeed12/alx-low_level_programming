#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
/**
 * last_index - Calculates the last index of a string.
 * @s: The input string.
 * Return: The last index of the string.
 */

/**
 *  * check - Helper function to check if a substring is a palindrome.
 *   * @s: The input string.
 *    * @start: The start index of the substring.
 *     * @end: The end index of the substring.
 *      * @mod: A flag indicating whether the string length is even or odd.
 *       * Return: 1 if the substring is a palindrome, 0 otherwise.
 **/
int is_palindrome(char *s);
int check(char *s, int start, int end, int modd);
int last_index(char *s)
{
int n = 0;
if (*s > '\0')
n += last_index(s + 1) + 1;
return (n);
}
int is_is_palindrome(char *s)
{
int end = last_index(s);
return (check(s, 0, end - 1, end % 2));
int check(char *s, int start, int end, int modd)
{
if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
return (1);
else if (s[start] != s[end])
return (0);
else
return (check(s, start + 1, end - 1, mod));
}


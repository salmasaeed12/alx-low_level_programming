#include "main.h"
#include <string.h>

/**
 *  * is_palindrome - Checks if a string is a palindrome.
 *   * @s: The string to check.
 *    * Return: 1 if s is a palindrome, 0 otherwise.
 *     */
int is_palindrome(char *s)
{
	    /* If the string is empty or has only one character, it is a palindrome. */
	    if (*s == '\0' || *(s + 1) == '\0')
		            return (1);

	        /* Calculate the length of the string. */
	        int len = strlen(s);

		    /* Check if the first and last characters are the same. */
		    if (*s != s[len - 1])
			            return (0);

		        /* Null-terminate the string after the last character. */
		        s[len - 1] = '\0';

			    /* Recursively check the substring between the first and last characters. */
			    return (is_palindrome(s + 1));
}



#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: string no. 1
 * @s2: string no. 2
 * Return: if it success return 0
 * if there an error return 1
 */
int _strcmp(char *s1, char *s2)
{
int equal = 0;
while (*s1)
{
	if (*s1 != *s2)
	{
		equal = ((int)*s1 - 48);
		break;
	}
	s1++;
	s2++;
}
return (equal);
}

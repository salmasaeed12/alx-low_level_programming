#include "main.h"
/**
 * rev_string -  a function that reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
 **/
void rev_string(char *s)
{
int l, i;
char temp;
/* Calculate the length of the string*/
for (l = 0; s[l] != '\0'; ++l)
;

/* Initialize i to 0 (starting from the beginning of the string)*/
/* and l - 1 (starting from the end of the string)*/
for (i = 0; i < l / 2; i++)
{
temp = s[i];
s[i] = s[l - 1 - i];
s[l - 1 - i] = temp;
}
}

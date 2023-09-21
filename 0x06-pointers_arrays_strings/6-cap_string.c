#include "main.h"
#include <stdio.h>
/**
 * isLower - determinates the lowercase
 * @c: characters
 * Return: 1 in case of true, 0 if it false
 */
int isLower(char c)
{
return (c >= 97 && c <= 122);
}
/**
 * isDelimiter - determinates if ASCII is Delimiter
 * @c: characters
 * Return: 1 in case of true, 0 if it false
 */
int isDelimiter(char c)
{
int i;
char delimiter[] = " \t\n,.!?\"(){}";
for (i = 0; i < 12; i++)
if (c == delimiter[i])
return (1);
return (0);
}
/**
 * *cap_string - a function that capitalizes all words of a string
 * @s: input string
 * Return: capitalizes all words
 */
char *cap_string(char *s)
{
char *ptr = s;
int founfdelimit = 1;
while (*s)
{
if (isDelimiter(*s))
founfdelimit = 1;
else if (isLower(*s) && founfdelimit)
{
*s -= 32;
founfdelimit = 0;
}
else
founfdelimit = 0;
s++;
}
return (ptr);
}

#include "main.h"
/**
 * *string_toupper -  function that changes lowercase letters to uppercase
 * @str: array of strings
 * Return: nothing
 */
char *string_toupper(char *)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
}
return (str);
}

#include "main.h"
/**
 * *rot13 - a function that encodes a string using rot13.
 * @c: input string
 * Return: the value c
 */
char *rot13(char *c)
{
int i;
char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *ptr = c;
while (*c)
{
for (i = 0; i <= 52; i++)
{
if (*c == rot13[i])
{
	*c = ROT13[i];
	break;
}
}
c++;
}
return (ptr);
}

#include "main.h"
/**
 * *_strncat - a function that concatenates two strings.
 *
 * @dest: a pointer to an arrey
 * @src: a pointer to an arrey
 * @n: number of index of string +1
 * Return: return with the value of dest
 */
char *_strncat(char *dest, char *src, int n)
{
int c, i;
c = 0;
while (dest[c])
	c++;
for (i = 0; i < n && src[i] != '\0'; i++)
	dest[c + i] = src[i];
dest[c + i] = '\0';
return (dest);
}


#include "main.h"
/**
 * *_strcatn - This function appends the src string to the dest string,
 *                 overwriting the terminating null byte (\0) at the end of dest
 * @dest: pointer to descripe the array
 * @src: pointer to descripe the array
 *
 * Return: return with the value of dest
 */




char *_strcat(char *dest, char *src)
{
	int c, c2;
	c = 0;
	while (dest[c])
		c++;
	for (c2 = 0; src[c2] ; c2++)
		dest[c++] = src[c2];
	return (dest);
}

#include <unistd.h>
/**
 * _putchar - writes the character c stdout
 * 0c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar.c(char c)
{
	return (write(1, &c, 1));
}

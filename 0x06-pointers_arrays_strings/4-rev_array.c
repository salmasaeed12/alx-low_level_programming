#include "main.h"
/**
 * reverse_array - function reverses content of an array of integers.
 * @a: array
 * @n: n is the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i, j, t;
for (i = 0, j = (n - 1); i < j; i++, j--)
{
	t = a[i];
	a[i] = a[j];
	a[j] = t;
}
}

#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints each array elem on a newl
 * @array: arry will be exacuted
 * @size: size of array
 * @action: an pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && action)
{
unsigned int i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
}

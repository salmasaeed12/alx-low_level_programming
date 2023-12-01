#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to function comparing
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size <= 0 && cmp == NULL && array == NULL)
return (-1);
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
return (-1);
}

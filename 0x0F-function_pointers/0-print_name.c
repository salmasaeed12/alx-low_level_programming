#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function prints name
 * @name: string to be printed
 * @f: pointer to function prints name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
return;
}

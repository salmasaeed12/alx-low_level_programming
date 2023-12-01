#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - Prints strings, followed by a new line.
* @separator: The string to be printed between strings.
* @n: The number of strings passed to the function.
* @...: A variable number of strings to be printed.
*
* Description: If separator is NULL, it is not printed.
* If one of the strings if NULL, (nil) is printed instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list m;
char *ptr;

va_start(m, n);
while (i < n)
{

ptr = va_arg(m, char *);

printf("%s", ptr == NULL ? "(nil)" : ptr);

if (i < n - 1)
printf("%s", separator == NULL ? "" : separator);

i++;
}

putchar('\n');

va_end(m);
}

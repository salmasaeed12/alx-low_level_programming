#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
int t = 0;
char *x, *y = "";
va_list l;
va_start(l, format);
if (format)
{
while (format[t])
{
switch (format[t])
{
case 'c':
printf("%s%c", y, va_arg(l, int));
break;
case 'i':
printf("%s%d", y, va_arg(l, int));
break;
case 'f':
printf("%s%f", y, va_arg(l, double));
break;
case 's':
x = va_arg(l, char *);
if (!x)
x = "(nil)";
printf("%s%s", y, x);
break;

default:
t++;
continue;

}
y = ", ";
t++;
}
}
printf("\n");
va_end(l);
}

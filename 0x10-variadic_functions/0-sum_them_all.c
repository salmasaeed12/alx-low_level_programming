#include <stdio.h>
#include<stdarg.h>
/**
 * sum_them_all - sum variadic function
 *
 * @n: number of arguments
 * @...: variadic
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int j, m = 0;
va_start(ap, n);
for (j = 0; j < n; j++)
m += va_arg(ap, int);
va_end(ap);
return (m);
}

#include<stdio.h>
#include<stdarg.h>

/**
 * print_numbers - print numbers with separator
 * using variadic function
 *
 * @separator: string that we print between numbers
 * @n: number of arguments
 * @...: ...
 * Return: (void);
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list no;
unsigned int i;
va_start(no, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(no, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);

}
printf("\n");
va_end(no);
}

#include "main.h"
/**
 * factorial - a function that returns
 *        the factorial of a given number.
 * @n: the number for which to calculate the factorial.
 * Return: the result of factorial n
 */
int factorial(int n)
{
if (n > 0)
{
return (factorial(n - 1) * n);
}
else if (n == 0)
{
return (1);
}
else
{
return (-1);
}
}

#include "main.h"
/**
 * factorial - a function that returns
 *        the factorial of a given number.
 * @n: he number for which to calculate the factorial.
 * Return: the result of factorial n
 */
int factorial(int n)
{ int fact = 0;
if (n > 0)
{
fact = factorial(n - 1) * n;
return (fact);
}
else if (n == 0)
{
return (1);
{
else
{
return (-1);
}
}

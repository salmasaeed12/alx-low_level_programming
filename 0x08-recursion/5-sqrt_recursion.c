#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a non-negative number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The resulting square root, or -1 if the number is negative.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Recursively calculates the natural square root
 *                        of a non-negative number.
 * @n: The number for which to calculate the square root.
 * @i: An iterator to keep track of the current guess.
 *
 * Return: The resulting square root, or -1 if no natural square root exists.
 */
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}


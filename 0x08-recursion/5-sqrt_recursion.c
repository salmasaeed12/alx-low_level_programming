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
helper(n, 0);
}
/**
 * helper - Recursively calculates the natural square root
 *                        of a non-negative number.
 * @n: The number for which to calculate the square root.
 * @y: An iterator to keep track of the current guess.
 *
 * Return: The resulting square root, or -1 if no natural square root exists.
 */
int helper(int n, int y)
{
if (n == y * y)
{
return (y);
}

else if (y < n)
{
y++;
helper(n, y++);
}
else
return (-1);
}


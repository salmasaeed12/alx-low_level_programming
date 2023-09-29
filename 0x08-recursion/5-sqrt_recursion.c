#include "main.h"
/**
 *  * _sqrt_recursion - Calculates the natural square root of a number.
 *   @n: The number for which to calculate the square root.
 *    Return: The natural square root of the number, or -1 if it doesn't have one.
 */
int calculate_sqrt(int n, int start, int end);
int _sqrt_recursion(int n)
{
if (n < 0)
{
return -1;
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return calculate_sqrt(n, 1, n / 2);
}
}
/**
 * calculate_sqrt - Helper function for binary search-like square root calculation.
 * @n: The number for which to calculate the square root.
 * @start: The start of the search range.
 * @end: The end of the search range.
 *
 * Return: The natural square root of the number, or -1 if it doesn't have one.
 */
int calculate_sqrt(int n, int start, int end)
{
 int mid = (start + end) / 2;
 long long mid_squared = (long long)mid * mid;
 if (start > end)
{
return (-1);
}
if (mid_squared == n)
{
return (mid);
}
else if (mid_squared < n)
{
return calculate_sqrt(n, mid + 1, end);
}
else
{
return calculate_sqrt(n, start, mid - 1);
}
}

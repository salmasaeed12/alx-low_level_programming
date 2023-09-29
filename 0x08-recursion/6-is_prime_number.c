#include "main.h"
/**
 *  * is_prime_number - Checks if a number is prime.
 *   * @n: The number to check.
 *    *
 *     * Return: (1) if prime, (0) otherwise.
 *      */
int is_prime_number(int n)
{
	    if (n <= 1) /* 0 and 1 are not prime numbers */
		        {
				        return (0);
					    }

	        return (is_prime_recursive(n, 2)); /* Start checking for primality from 2 */
}

/**
 *  * is_prime_recursive - Helper function to recursively check for primality.
 *   * @n: The number to check.
 *    * @divisor: The current divisor to check.
 *     *
 *      * Return: (1) if prime, (0) otherwise.
 *       */
int is_prime_recursive(int n, int divisor)
{
	    if (divisor * divisor > n) /* If we've checked all divisors up to the square root */
		        {
				        return (1); /* It's a prime number */
					    }

	        if (n % divisor == 0) /* If n is divisible by the current divisor */
			    {
				            return (0); /* It's not a prime number */
					        }

		    return (is_prime_recursive(n, divisor + 1)); /* Check the next divisor */
}


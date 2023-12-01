#include "3-calc.h"
#include <stdlib.h>
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Returns the sum of two numbers.
 * @a: variable no.1.
 * @b: variable no.2.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Returns the sub of two numbers.
 * @a: variable no.1.
 * @b: variable no.2.
 *
 * Return: The sud of a and b.
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - Returns the product of two numbers.
 * @a: variable no.1.
 * @b:  variable no.2.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: variable no.1.
 * @b:  variable no.2.
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
return (a % b);
}

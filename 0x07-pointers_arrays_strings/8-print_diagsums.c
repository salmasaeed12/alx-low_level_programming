#include "main.h"
#include <stdio.h>
/**
 *  * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 *   * @a: A pointer to a square matrix of integers.
 *    * @size: The size of the matrix (number of rows/columns).
 */
void print_diagsums(int *a, int size)
{
int diag1_sum = 0;
int diag2_sum = 0;
for (int i = 0; i < size; i++)
{
diag1_sum += a[i * size + i];
diag2_sum += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", diag1_sum, diag2_sum);
}

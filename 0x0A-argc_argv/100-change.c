#include <stdio.h>
#include <stdlib.h>
/**
 * recur - Recursively calculate
 *      the minimum number of coins needed
 * @m: Amount for which to calculate minimum coins
 * Return: Minimum number of coins needed
 */
int recur(int m);
 /**
  * main - Entry point
  * @argc: The number of command line arguments
  * @argv: An array containing the command line arguments
  * Return: 0 on success, 1 on error
  */
#include <stdio.h>
#include <stdlib.h>
int recur(int);
int main(int argc, char *argv[])
{
int x, y;
if (argc == 1)
{
printf("Error\n");
return (1);
}
x = atoi(argv[1]);
if (x < 0)
{
printf("0\n");
return (0);
}
y = recur(x);
printf("%d", y);
return (0);
}
int recur(int m)
{
int n;
if (m >= 25)
{
n = m % 25;
return ((m / 25) + recur(n));
}
else if (m >= 10 && m < 25)
{
n = m % 10;
return ((m / 10) + recur(n));
}
else if (m >= 5 && m < 10)
{
n = m % 5;
return ((m / 5) + recur(n));
}
else if (m >= 2 && m < 5)
{
n = m % 2;
return ((m / 2) + recur(n));
}
else
return (1);
}

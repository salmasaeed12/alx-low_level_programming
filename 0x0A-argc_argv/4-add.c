#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - Entry point
 *   * @argc: The number of command line arguments
 *    * @argv: An array containing the command line arguments
 *     *
 *      * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int i = 1, m, sum = 0;

if (argc == 1)
{
printf("0\n");
}
else
{
while (i < argc)
{
m = atoi(argv[i]);

if (m >= 0 && m <= 1000000)
{
sum += m;
i++;
}
else
{
printf("Error\n");
return (1);
break;
}
}
}
printf("%d\n", sum);
return (0);
}


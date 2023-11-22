#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
char *ptr;
if (argc == 1)
{
printf("0\n");
return (0);
}
while (i < argc)
{
ptr = argv[i];
if (!isdigit(*ptr))
{
printf("Error\n");
return (1);
}
m = atoi(argv[i]);
sum += m;
i++;
}
printf("%d\n", sum);
return (0);
}


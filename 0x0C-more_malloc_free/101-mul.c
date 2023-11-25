#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 98 on incorrect usage or non-digit input
 */
int main(int argc, char *argv[])
{
unsigned long m, l, sum;
size_t ii;
if (argc != 3)
{
fprintf(stderr, "Error\n");
exit(98);
}
for (i = 0; i < strlen(argv[1]); i++)
{
if (!isdigit(argv[1][i]))
{
fprintf(stderr, "Error\n");
exit(98);
}
}
for (i = 0; i < strlen(argv[2]); i++)
{
if (!isdigit(argv[2][i]))
{
fprintf(stderr, "Error\n");
exit(98);
}
}
m = strtoull(argv[1], NULL, 10);
l = strtoull(argv[2], NULL, 10);
sum = m *l;
printf("%lu\n", sum);
return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of the function
 * @num_bytes: number of bytes to print
 */
void print_opcodes(int num_bytes)
{
unsigned char *func_ptr = (unsigned char *)print_opcodes;
int i = 0;
while (i < num_bytes)
{
printf("%02hhx", func_ptr[i]);
if (i < num_bytes - 1)
{
printf(" ");
}
i++;
}
printf("\n");
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int bytes, i;
char *arr;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

arr = (char *)main;

for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", arr[i]);
break;
}
printf("%02hhx ", arr[i]);
}
return (0);
}


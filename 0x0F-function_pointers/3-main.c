#include<stdio.h>
#include"3-calc.h"
#include<stdlib.h>
#include<string.h>
/**
 * main - entry point
 *
 * @argc: numner of arguments
 * @argv: pointer to the arguments
 * Return: always 0 on succeed
 */
int main(int argc, char *argv[])
{
int x, y;
char *m;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
x = atoi(argv[1]);
y =  atoi(argv[3]);
m = argv[2];
if (get_op_func(m) == NULL || m[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*m == '/' && y == 0) || (*m == '%' && y == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(m)(x, y));

return (0);
}

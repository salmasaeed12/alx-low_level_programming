#include<stdio.h>
#include"3-calc.h"
/**
* get_op_func - Get the op func object
* @s: char operator
* Return: int(*)(int, int)..pointer to the correct function
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
while (ops[i].op != NULL && *(ops[i].op) != *s)
i++;
return (ops[i].f);
}


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - associate operator with appropriate func
 *
 * @s: takes operator
 *
 * Return: int
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if ((*ops[i].op == *s) && (strlen(s) == 1))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

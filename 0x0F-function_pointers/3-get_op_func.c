/*
 * File: 3-get_op_func.c
 * Desc: Selects the correct function to perform
 */

#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform
 * @s: The operator passed as argument
 * Return: returns a pointer to the function
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
		int i = 0;

		while (ops[i].op != NULL)
		{
			if (s[0] == ops[i].op[0])
				return (ops[i].f);
			i++;
		}
		return (NULL);
}

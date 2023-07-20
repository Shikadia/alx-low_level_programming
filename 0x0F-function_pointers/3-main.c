#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints simple operations by calling functions defined for the program
 * @ac: Argument count
 * @av: An array of pointers to the arguments
 * Return: returns (0) if successful
 */
int main(int ac, char *av[])
{
	int num1, num2;
	char *op;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(av[1]);
	op = av[2];
	num2 = atoi(av[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}

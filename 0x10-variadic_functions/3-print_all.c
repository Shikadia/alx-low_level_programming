#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

/**
 * print_char - Prints a character
 * @arg: A list of arguments pointing to the character be printed
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);

	printf("%c", letter);
}

/**
 * print_int - Prints an integer
 * @arg: A list of arguments pointing to the integer be printed
 */
void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);

	printf("%d", n);
}

/**
 * print_float - Prints a float
 * @arg: A list of arguments pointing to the float be printed
 */
void print_float(va_list arg)
{
	float n;

	n = va_arg(arg, double);

	printf("%f", n);
}

/**
 * print_string - Prints a string
 * @arg: A list of arguments pointing to the string be printed
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - Prints anything, followed by a new line
 * @format: A list of types of arguments passed to the function
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *separator;

	va_list args;

	fr_t func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	i = 0;
	separator = "";
	while (format && format[i])
	{
		j = 0;
		while (func[j].id)
		{
			if (format[i] == *(func[j].id))
			{

				printf("%s", separator);
				func[j].id_fun(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);

	printf("\n");
}

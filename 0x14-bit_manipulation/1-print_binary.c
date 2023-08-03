#include "main.h"

/**
 * print_binary - converts a decimal to binary, and prints it
 * @n: value to be converted
 *
 * Return: returns void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

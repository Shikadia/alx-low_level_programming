#include "main.h"

/**
* print_number - Prints an integer using the _putchar function
* @n: Integer to print
*
* Return: void
*/
void print_number(int n)
{
	int buffer;

	int multiplier = 1;
	int x = n;

	if (n < 0)
	{
		_putchar('-');
		x *= -1;
	}
	buffer = x;

	while (buffer >= 10)
	{
		multiplier *= 10;
		buffer /= 10;
	}

	while (x >= 0 && multiplier > 0)
	{
		_putchar((x / multiplier) + '0');
		x %= multiplier;
		multiplier /= 10;
	}
}


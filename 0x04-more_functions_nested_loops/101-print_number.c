#include "main.h"

/**
* print_number - Prints an integer using the _putchar function
* @n: Integer to print
*
* Return: void
*/
void print_number(int n)
{
	int z;
	unsigned int buffer;

	int multiplier = 1;
	unsigned int x = n;

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

	while (multiplier > 0)
	{
		z = x / multiplier;
		_putchar(z + '0');
		x %= multiplier;
		multiplier /= 10;
	}
}


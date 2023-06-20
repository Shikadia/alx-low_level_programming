#include "main.h"

/**
* print_sign - Prints the sign of a number
* @x: The character to check
*
* Return: returns 1 if positive, -1 if Negative
* 0 if zero
*/
int print_sign(int x)
{
	if (x > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (x < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

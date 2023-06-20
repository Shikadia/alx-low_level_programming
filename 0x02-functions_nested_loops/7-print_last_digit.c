#include "main.h"

/**
* print_last_digit - Prints the last digit of a number
* @x: The integer to print
*
* Return: returns the last digit
*/
int print_last_digit(int x)
{
	int last_digit;

	if (x < 0)
		x *= -1;

	last_digit = x % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}

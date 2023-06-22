#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the character _ should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}

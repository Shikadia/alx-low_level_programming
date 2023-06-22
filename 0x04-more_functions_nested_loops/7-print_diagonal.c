#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: The number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x, y;

	x = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}

	while (x < n)
	{
		y = 0;
		while (y < x)
		{
			_putchar(' ');
			y++;
		}
		_putchar('\\');
		_putchar('\n');
		x++;
	}
}

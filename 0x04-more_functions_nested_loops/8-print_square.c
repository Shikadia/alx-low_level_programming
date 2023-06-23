#include "main.h"

/**
 * print_square - prints a square followed by a new line on the terminal
 * @size: The number of times the character # should be printed
 *
 * Return: void
 */
void print_square(int size)
{
	int x, y;

	x = 0;
	if (size <= 0)
		_putchar('\n');

	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			_putchar('#');
			y++;
		}
		_putchar('\n');
		x++;
	}
}

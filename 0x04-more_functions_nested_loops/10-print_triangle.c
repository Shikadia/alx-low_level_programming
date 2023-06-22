#include "main.h"

/**
 * print_triangle - Prints a triangle on the terminal using the # character
 * @size: The number of times the character # should be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		x = 0;
		while (x < size)
		{
			z = 0;
			y = 1;
			while ((size - x) > y)
			{
				_putchar(' ');
				y++;
			}
			while (z <= x)
			{
				_putchar('#');
				z++;
			}
			_putchar('\n');
			x++;
		}
	}
}

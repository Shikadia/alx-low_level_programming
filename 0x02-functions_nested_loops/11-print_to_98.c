#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98
 * @x: The counting number
 *
 * Return: returns void
 */
void print_to_98(long x)
{
	if (x <= 98)
	{
		while (x < 98)
		{
			printf("%ld, ", x);
			x++;
		}
		printf("%ld\n", x);
	}
	else
	{
		while (x > 98)
		{
			printf("%ld, ", x);
			x--;
		}
		printf("%ld\n", x);
	}
}

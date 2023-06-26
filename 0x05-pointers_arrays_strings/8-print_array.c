#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: The pointer to an array
 * @n: The number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int index;

	index = 0;
	while (index < n)
	{
		printf("%d", a[index]);
		index++;
		if (index != n)
			printf(", ");
	}
	printf("\n");
}

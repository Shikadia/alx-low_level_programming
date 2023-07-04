#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Prints the sum of two diagonals of a square matrix of int
* @a: Pointer to an array of matrix
* @size: Size of the array
* Return: Return (dest)
*/
void print_diagsums(int *a, int size)
{

	int i, diagonal1, diagonal2;

	i = 0;
	diagonal1 = 0;
	diagonal2 = 0;

	while (i < size)
	{
		diagonal1 += *(a + (i * size) + i);
		diagonal2 += *(a + (i * size) + (size - i - 1));

		i++;
	}

	printf("%d, %d\n", diagonal1, diagonal2);
}

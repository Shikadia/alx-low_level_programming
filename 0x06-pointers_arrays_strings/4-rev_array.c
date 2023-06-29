#include "main.h"

/**
* reverse_array - Reverses the content of an array of integers
* @a: The pointer to an array of integers
* @n: Number of elements of the array
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i, buffer;
	int j;

	i =0;
	while (i < n/2)
	{
		j = n - 1 - i;
		buffer = a[i];
		a[i] = a[j];
		a[j] = buffer;
		i++;
	}
}

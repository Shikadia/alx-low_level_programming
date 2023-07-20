#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer in an array of integers
 * @array: An array pointer to integers
 * @size: Size of the array
 * @cmp: Pointer to the function to be used to compare values
 * Return: returns (-1) on FAILURE and
 * returns the index on SUCCESS
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}

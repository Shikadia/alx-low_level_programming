#include "function_pointers.h"

/**
 * array_iterator - Executes a function passed as a parameter
 * @array: An array pointer to integers
 * @size: Size of the array
 * @action: Pointer to the function to use
 * Return: returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size > 0)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

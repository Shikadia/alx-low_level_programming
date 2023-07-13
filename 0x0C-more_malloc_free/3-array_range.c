#include <stdlib.h>
#include "main.h"

/**
* array_range - Creates an array of integers
* @min: The minimum number of values
* @max: The maximum number of values
*
* Return: returns pointer to the first elemnt in the array
*/
int *array_range(int min, int max)
{
	int *ptr, i, x;

	if (min > max)
		return (NULL);

	x = (max - min) + 1;
	ptr = malloc(sizeof(*ptr) * x);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < x)
	{
		ptr[i] = min;
		min++;
		i++;
	}

	return (ptr);


}

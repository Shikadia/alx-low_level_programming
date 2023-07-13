#include <stdlib.h>

/**
* _calloc - Allocates memory for an array, using malloc
* @nmemb: The total number of elements in the array
* @size: The total size alloctated in bytes
*
* Return: returns a void pointer to the first byte
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, x;
	char *ptr;

	x = nmemb * size;

	if (x <= 0)
		return (NULL);

	ptr = malloc(x);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < x)
	{
		ptr[i] = 0;
		i++;
	}

	return ((void *) ptr);
}

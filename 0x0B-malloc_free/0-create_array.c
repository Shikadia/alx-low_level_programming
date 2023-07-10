#include <stdlib.h>

/**
* create_array -  Creates an array of char,
* and initializes it with a specific char
* @size: The size of the array
* @c: The char to be initialized to the array
*
* Return: returns (NULL)  or (return_array) on SUCCESS
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *return_array;
	unsigned int n;

	if ( size == 0)
		return (NULL);

	n = size;
	return_array = (char *)malloc(n * sizeof(char));

	if (return_array == NULL)
		return (NULL);

	i = 0;
	while (i < n)
	{
		*(return_array + i) = c;
		i++;
	}

	return (return_array);
}

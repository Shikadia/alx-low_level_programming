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
	char *str;
	unsigned int n;

	if (size == 0)
		return (NULL);

	n = size;
	str = (char *)malloc(n * sizeof(char));

	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < n)
	{
		*(str + i) = c;
		i++;
	}

	return (str);
}

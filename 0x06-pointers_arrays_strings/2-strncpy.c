#include "main.h"

/**
* *_strncpy - Copies a string frm @src to @desc buffer
* @dest: The pointer to the destination buffer to copy to
* @src: The source string to copy from
* @n: The number of characters to copy
* Return: Returns a pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		dest[i] = '\0';
	}

	return (dest);
}

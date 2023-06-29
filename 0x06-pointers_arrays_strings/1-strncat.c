
#include "main.h"
#include <string.h>

/**
* *_strcat - Concatenates two strings
* @dest: The pointer to the destination buffer to append
* @src: The source string to concatenate from
* @n: number of bytes to concatinate
* Return: Returns a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	*dest = '\0';

	return (result);
}

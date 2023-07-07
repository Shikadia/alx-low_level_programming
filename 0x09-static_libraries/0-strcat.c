#include "main.h"
#include <string.h>

/**
* *_strcat - Concatenates two strings
* @dest: The pointer to the destination buffer to append
* @src: The source string to concatenate from
* Return: Returns a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (result);
}

#include "main.h"
#include <stddef.h>

/**
* _strstr - Locates a substring
* @haystack: Pointer to a string to search
* @needle: Pointer to a string of bytes
* Return: Returns (haystack) or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] != '\0' && haystack[i + j] == needle[j])
			j++;

		if (needle[j] == '\0')
			return (&haystack[i]);

		i++;
	}

	return (NULL);



}

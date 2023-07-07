#include "main.h"
#include <stddef.h>

/**
* _strpbrk - Searches a string for any of a set of bytes
* @s: Pointer to a string to search
* @accept: Pointer to a string of bytes
*
* Return: Returns (s) or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}

		s++;
	}
	return (NULL);
}

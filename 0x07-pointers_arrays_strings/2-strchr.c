#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string
* @s: The string
* @c: The character to be located
*
* Return: returs the pointer to the character or NULL
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);

}

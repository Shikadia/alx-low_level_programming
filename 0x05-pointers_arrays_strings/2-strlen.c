#include "main.h"

/**
* _strlen - methdo that finds the length
* of an input string
* @s: the string to interate through
* Return: returns the length of the the string
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}

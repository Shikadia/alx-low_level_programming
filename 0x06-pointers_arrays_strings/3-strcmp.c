#include "main.h"

/**
* _strcmp - Compares two strings
* @s1: Pointer to the first string to be compared
* @s2: Pointer to the Second string to be compared
*
* Return: If *s1 == *s2, return 0
*	   If *s1 != *s2, return the string difference (*s1 - *s2)
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i =0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (0);
}


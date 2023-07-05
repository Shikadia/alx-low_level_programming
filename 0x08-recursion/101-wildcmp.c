#include "main.h"

/**
* wildcmp - Compares two strings
* @s1: Pointer to the first string to be compared
* @s2: Pointer to the second string to be compared
* Return: returns (1) or (0 (True or False)
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
	}
}

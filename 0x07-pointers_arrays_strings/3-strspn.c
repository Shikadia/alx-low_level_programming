#include "main.h"

/**
* _strspn - gets the length of a sub string
* @s: The string
* @accept: the substring to find in s
*
* Return: returs the count
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	unsigned int count2;

	count = 0;
	while (*s != '\0')
	{
		count2 = 0;
		while (accept[count2] != '\0')
		{
			if (*s == accept[count2])
			{
				count++;
				break;
			}
			count2++;
		}

		if (!accept[count2])
			return (count);

		s++;
	}

	return (count);
}

#include "main.h"

/**
* _atoi - Converts a string to an integer
* @s: The string to be converted
*
* Return: returns an int of the converted string
*/
int _atoi(char *s)
{
	int sign;
	unsigned int num;

	num = 0;
	sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		s++;
	}
	return (num * sign);
}

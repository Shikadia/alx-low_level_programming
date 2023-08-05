#include "main.h"

/**
 * binary_to_uint - Converts a binary number unsigned int;
 * @b: A pointer to the string of binary numbers
 *
 * Return: returns an unsigned int of the converted or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	unsigned int bit;
	int len;

	if (!b)
		return (0);
	len = 0;
	num = 0;
	while (b[len])
		len++;
	if (len > 0)
	{
		bit = 1;
		while (--len >= 0)
		{
			if (b[len] != '0' && b[len] != '1')
				return (0);
			num += bit * (b[len] - '0');
			bit = bit << 1;
		}
	}
	return (num);


}

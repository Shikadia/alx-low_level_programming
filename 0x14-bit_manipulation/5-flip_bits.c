#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to be
 * flipped to get from number 'n' to 'm'
 * @n: The value
 * @m: The value to flip n to
 *
 * Return: returns the number of bits flipped from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int buffer;
	unsigned int count;
	unsigned int bits;
	unsigned long int bit;

	buffer = n ^ m;
	bits = (sizeof(n) * 8) + 1;
	bit = 1;
	count = 0;
	while (--bits > 0)
	{
		if (buffer & bit)
			count++;
		bit = bit << 1;
	}
	return (count);
}

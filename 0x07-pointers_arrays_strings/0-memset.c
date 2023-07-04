#include "main.h"

/**
* _memset - Fills the memory whith a constant byte
* @s: pointer to a memory area
* @b: Constantbyte
* @n: number of bytes to fill
*
* Return: returns pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;
	char *buffer;

	buffer = s;
	count = 0;

	while (count < n)
	{
		*s = b;
		s++;
		count++;
	}

	return (buffer);
}

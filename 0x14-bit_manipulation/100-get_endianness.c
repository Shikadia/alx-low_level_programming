#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: returns 0 if  endianness
 */
int get_endianness(void)
{
	unsigned int n;
	char *c = (char *) &n;

	n = 1;
	if (*c)
		return (1);
	else
		return (0);
}

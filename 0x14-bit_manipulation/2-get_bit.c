#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: value
 * @index: The index to get the value at - index starts at 0
 *
 * Return: returns -1 if error, or 0/1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);
	return ((n >> index) & 1);

}

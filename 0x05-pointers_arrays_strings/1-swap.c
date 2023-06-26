#include "main.h"

/**
* swap_int - swaps two values (ints)
* @a: First int
* @b: second int
* Return: returns void
*/
void swap_int(int *a, int *b)
{
	int buffer = *a;
	*a = *b;
	*b = buffer;
}

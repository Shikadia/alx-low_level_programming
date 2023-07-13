#include <stdlib.h>

/**
* malloc_checked - Allocates memory using the malloc function
* @b: The total size allocated in bytes
*
* Return: returns a void pointer to the first byte
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

#include <stdlib.h>

/**
* _realloc - Reallocates a memory block using malloc and free function
* @ptr: The pointer to the memory previously allocated
* @old_size: The size, in bytes, of the allocated space for ptr
* @new_size: The new size, in bytes of the new memory block
*
* Return: returns void pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *prev, *current;
	unsigned int i, x;

	if (ptr == NULL)
	{
		current = malloc(new_size);
		if (current)
			return ((void *) current);
		else
			return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
		x = old_size;
	else
		x = new_size;

	current = malloc(new_size);
	if (current == NULL)
		return (NULL);
	i = 0;
	prev = ptr;
	while (i < x)
	{
		current[i] = prev[i];
		i++;
	}
	free(prev);
	return ((void *) current);
}

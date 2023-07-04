#include "main.h"

/**
* _memcpy - Copies memory area from src to dest
* @dest: Pointer to the destination buffer
* @src: Pointer to the source to copy from
* @n: Number of bytes to copy
* Return: Returns (dest)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

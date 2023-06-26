#include "main.h"

/**
* *_strcpy - Copies the string pointed to by src, including the terminating
* @dest: The pointer to the destination buffer
* @src: Pointer to the string to be copied
*
* Return: returns the value @dest
*/
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}

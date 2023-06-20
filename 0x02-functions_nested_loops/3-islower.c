#include "main.h"

/**
* _islower - Checks for lowercase character
* @c: The character to check
* Return: returns 1 if c is lowercase or Returns 0 otherwise
*/
int _islower(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

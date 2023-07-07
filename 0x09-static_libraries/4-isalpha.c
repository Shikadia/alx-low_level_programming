#include "main.h"

/**
* _isalpha - checks if input is an alphabet
* @c: input to check
* Return: returns 1 if isalpha and 0 if not
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

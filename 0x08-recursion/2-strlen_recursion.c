#include "main.h"

/**
* _strlen_recursion - Returns the length of a string.
* @s: Pointer to the string.
*
* Return: void.
*/
int _strlen_recursion(char *s)
{
	int x;

	x = 1;
	if (*s != '\0')
	{
		x += _strlen_recursion(s + 1);
		return (x);
	}
	else
		return (0);
}

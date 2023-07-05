#include "main.h"
#include <string.h>

int _palindrome(char *s, char *x, int length);

/**
* is_palindrome - Checks if a string is a palindrome
* @s: Pointer to a string to check
* Return: returns 1 or 0 (Trues or False)
*/
int is_palindrome(char *s)
{
	int end_index;
	int length;

	length = strlen(s);
	end_index = length - 1;

	return (_palindrome(s, s + end_index, length/2));
}

/**
* _palindrome - Checks if a string is a palindrome
* @s: Pointer to a string to check
* @s: pointer to the last part of the string
* @length: half of the actual length
* Return: returns (1), (0)
*/
int _palindrome(char *s, char *x, int length)
{
	if (length == 0)
		return (1);
	else if (*s == *x)
		return (_palindrome(s + 1, x - 1, length -1));
	else
		return (0);
}

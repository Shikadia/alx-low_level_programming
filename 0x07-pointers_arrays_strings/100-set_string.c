#include "main.h"

/**
* set_string - Sets the value of a pointer to a char
* @s: Pointer to a pointer to a character
* @to: Pointer to a character
* Return: returns Void
*/
void set_string(char **s, char *to)
{
	*s = to;
}

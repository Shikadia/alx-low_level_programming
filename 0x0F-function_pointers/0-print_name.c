#include "function_pointers.h"

/**
* print_name - Prints a name
* @name: Pointer to a string of chararcters (name) to be printed
* @f: Function pointer
* Return: return void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

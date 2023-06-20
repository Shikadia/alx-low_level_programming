#include "main.h"

/**
* print_alphabet - print lowercase alphabet and return nothing
* Return: returns void
*/
void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}

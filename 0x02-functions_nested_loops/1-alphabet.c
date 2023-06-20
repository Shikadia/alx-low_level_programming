#include "main.h"

/**
* main - entry point to programme that
* prints all the alphabet in lowercase
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

#include "main.h"

/**
* print_alphabet_x10 - print lowercase alphabet 10 times
* followed by a new line
* Return: returns void
*/
void print_alphabet_x10(void)
{
	char alphabet;
	int count;

	count = 0;
	while (count < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		count++;
	}
}

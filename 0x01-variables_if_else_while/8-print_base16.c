#include <stdio.h>

/**
* main - entry point of programme, print all lower case
* character in Hexadecimal (base 16)
* Return: returns 0
*/
int main(void)
{
	int num = 0;
	char character = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (character < 'g')
	{
		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}

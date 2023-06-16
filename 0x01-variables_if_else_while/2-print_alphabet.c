#include <stdio.h>

/**
* main - entry point of programme, print all lower case
* character
* Return: returns 0
*/
int main(void)
{
	int charValue = 97;

	while (charValue < 123)
	{
		putchar(charValue);
		charValue++;
	}
	putchar('\n');
	return (0);
}

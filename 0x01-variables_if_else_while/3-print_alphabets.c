#include <stdio.h>

/**
* main - entry point of programme, print all lower case
* alphabets and upper case alphabets
* Return: returns 0
*/
int main(void)
{
	int charLowerCaseValue = 97;
	int charUpperCaseValue = 65;

	while (charLowerCaseValue < 123)
	{
		putchar(charLowerCaseValue);
		charLowerCaseValue++;
	}
	while (charUpperCaseValue < 91)
	{
		putchar(charUpperCaseValue);
		charUpperCaseValue++;
	}
	putchar('\n');
	return (0);
}

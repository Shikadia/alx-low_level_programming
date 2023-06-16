#include <stdio.h>

/**
* main - entry point of programme, print all lower case
* character in reverse
* Return: returns 0
*/
int main(void)
{
	int charValue = 122;

	while (charValue > 96)
	{
		putchar(charValue);
		charValue--;
	}
	putchar('\n');
	return (0);
}

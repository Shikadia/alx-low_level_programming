#include <stdio.h>

/**
* main - entry point of programme, print all numbers
*usin the putchar function
* Return: returns 0
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Generates random valid passwords for the program 101-crackme
*Return: returns 0
*/
int main(void)
{
	int buffer;
	int count;
	char pass_c;

	srand(time(NULL));

	count = 0;

	while (count < 16)
	{
		buffer = rand() % 26 + 65;

		pass_c = (char)buffer;

		count++;
		printf("%c", pass_c);
	}
	printf("\n");

	return (0);
}


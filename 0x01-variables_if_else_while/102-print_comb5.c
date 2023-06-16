#include <stdio.h>

/**
* main - entry point of programme, print all numbers
* combination in two twos
* Return: returns 0
*/
int main(void)
{
	int firstNum;
	int secondNum;

	firstNum = 0;
	while (firstNum  < 99)
	{
		if ((firstNum == 98) && (secondNum == 99))
			break;
		secondNum = firstNum + 1;
		while (secondNum < 100)
		{
			putchar((firstNum / 10) + '0');
			putchar((firstNum % 10) + '0');
			putchar(' ');
			putchar((secondNum / 10) + '0');
			putchar((secondNum % 10) + '0');
			if ((firstNum == 98) && (secondNum == 99))
				break;
			putchar(',');
			putchar(' ');
			secondNum++;
		}
		firstNum++;
	}
	putchar('\n');
	return (0);
}

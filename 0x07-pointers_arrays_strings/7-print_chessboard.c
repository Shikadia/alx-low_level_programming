#include "main.h"

/**
* print_chessboard - Prints the chessboard
* @a: Pointer to the array
* Return: Void
*/
void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	row = 0;
	while (row < 8)
	{
		column = 0;
		while (column < 8)
		{
			_putchar(a[row][column]);
			column++;
		}
		_putchar('\n');
		row++;
	}
}

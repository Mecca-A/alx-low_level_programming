#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @x: the chessboard to be printed
 */
void print_chessboard(char (*x)[8])
{
	int index1, index2;

	for (index1 = 0; x[index1][7]; index1++)
	{
		for (index2 = 0; index2 < 8; index2++)
			_putchar(a[index1][index2]);
		_putchar('\n');
	}
}

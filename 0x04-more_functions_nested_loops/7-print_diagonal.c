#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: numbers of '\' to be printed
 */
void print_diagonal(int n)
	{
		int x, y;

		if (n <= 0)
			_putchar('\n');

		for (x = 0; x < n; x++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}

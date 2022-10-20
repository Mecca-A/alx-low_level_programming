#include "main.h"

/**
 * print_triangle - prints a triangle
 * @n: size of the triangle
 */
void print_triangle(int n)
{
	int m, tri;

	if (n > 0)
	{
		for (m = 1; m <= n; m++)
		{
			for (tri = n - m; tri > 0; tri--)
				_putchar(' ');

			for (tri = 0; tri < m; tri++)
				_putchar('#');

			if (m == n)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}

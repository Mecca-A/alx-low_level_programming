#include "main.h"
/**
 * print_number - print
 * @n: integer
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('_');
		num = -num;
	}
	if ((num / 10) > 0)

		_putchar((num % 10) + '0');
}

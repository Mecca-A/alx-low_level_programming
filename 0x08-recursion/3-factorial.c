#include "main.h"

/**
 * factorial - factors of n
 * @n: integers
 * Return: 1 (success)
 * retun -1 on error and set errno appropriately
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

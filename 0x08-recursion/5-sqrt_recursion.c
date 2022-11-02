#include "main.h"

/**
 * sqrt - evaluates from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: 1 (success)
 * return -1 on error and set errno appropriately
 */
int sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: number integer
 * Return: 1 (success)
 * return -1 on error and set errno appropriately
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}


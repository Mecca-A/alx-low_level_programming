#include <stdio.h>

/**
 * main - reversed printing
 * Return: o
 */
int main(void)
{

	char le;

	for  (le = 'z'; le >= 'a'; le--)
		putchar(le);
	putchar('\n');

	return (0);

}

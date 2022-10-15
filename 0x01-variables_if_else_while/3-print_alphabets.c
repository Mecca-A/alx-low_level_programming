#include <stdio.h>

/**
 * main - print in ALPHA and lower
 * Return: 0
 */
int main(void)
{
	char charac;

	for (charac = 'a'; charac <= 'z'; charac++)
		putchar(charac);
	for (charac = 'A'; charac <= 'Z'; charac++)
		putchar(charac);
	putchar('\n');
	return (0);

}

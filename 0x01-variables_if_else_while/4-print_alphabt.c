#include <stdio.h>
/**
 * main- Entry point
 * Description: 'priting in lower case'
 * Return: 0
 */
int main(void)
{

	char lal;

	for (lal = 'a'; lal <= 'z'; lal++)
	{
		if (lal != 'e' && lal != 'q')
			putchar(lal);
	}
	putchar('\n');

	return (0);

}

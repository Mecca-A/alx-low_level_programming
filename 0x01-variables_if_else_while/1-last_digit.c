#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - block
 * Return: 0
 */
int main(void)
{

	int n;
	into a;

	srand(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
		else if (a == 0)
		{
			printf("Last digit of %d is %d and 0\n", n, a);
		}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	return (0);

}


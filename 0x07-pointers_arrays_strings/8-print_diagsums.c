#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a:the matrix of integers.
 * @size: size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int index, n, sum1 = 0, sum2 = 0;

	for (index = 0; index <= (size * size); index = index + size + 1)
		sum1 = sum1 + a[index];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		sum2 = sum2 + a[n];
	printf("%d, %d\n", sum1, sum2);
}

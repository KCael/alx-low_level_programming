#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: 2d array of chars
 * @size: number matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum1;
	unsigned int sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = o; i < size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}

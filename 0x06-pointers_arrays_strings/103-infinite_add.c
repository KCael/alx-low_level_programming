#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size
 * Return: r if success
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, sum1;
	int n1len;

	for (i = 0; n1; i++)
		n1len = i;

	rev_string(n1);
	rev_string(n2);

	for (i = 0; n1len; i++)
	{
		sum1 = ((n1[i] - '0') + (n2[i] - '0') + size_r);
		r[i] = sum1;
	}
	return (r);
}

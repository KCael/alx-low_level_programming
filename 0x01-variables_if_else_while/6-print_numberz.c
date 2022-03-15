#include <stdio.h>

/**
 * main - entry level
 *
 * Description: prints sinle digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}

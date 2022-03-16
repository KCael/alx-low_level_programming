#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet 10 times, in lowercase
 *
 *Return: alwayss 0 (success)
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c)
		}

		i++;
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_alphabet - prints the alphabet 10 times, in lowercase
 *
 * Returns: alwayss 0
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch)
		}

		i++;
		_putchar('\n');
	}
}

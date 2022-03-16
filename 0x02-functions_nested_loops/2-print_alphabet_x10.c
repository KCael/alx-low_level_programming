#include "main.h"

/**
 * print_alphabet - prints the alphabet 10 times, in lowercase
 *
 * Returns: alwayss 0
 */
void print_alphabet(void)
{
	char ch;
	int i;

	i = '0';

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

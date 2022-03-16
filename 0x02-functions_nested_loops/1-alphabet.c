#include "main.h"

/**
 *print_alphabet - prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}

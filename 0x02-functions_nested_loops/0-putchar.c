#include <unistd.h>
#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 1 (Success)
 */

int _putchar(char c)
{
	char text[] = "_putchar";
	int i = 0;

	while (text[i] != 0)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	write(1, &c, 1);
	return (1);
}

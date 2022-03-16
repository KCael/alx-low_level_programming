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
	int i = 2;

	for (i = 0; i <= 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (write(1, &c, 1));
}

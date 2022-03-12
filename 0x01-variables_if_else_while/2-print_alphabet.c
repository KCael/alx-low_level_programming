#include <stdio.h>

/**
 *main - entry point
 *
 *Description: Print the alphabet in lowerchase followed by a new line
 *
 *Return: Always 0 (Success)
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

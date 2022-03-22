#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints valid passwords for the program 101-crackme
 *Return: 0.
 */

int main(void)
{
	int pass;

	srand(time(NULL));
	pass = rand();
	printf("%i\n", pass);

	return (0);
}

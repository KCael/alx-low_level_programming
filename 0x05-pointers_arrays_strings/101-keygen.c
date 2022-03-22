#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints valid passwords for the program 101-crackme
 *Return: 0.
 */

int main(void)
{
	int pass[50];

	srand(time(NULL));
	pass[50] = rand();
	printf("%i\n", pass[50]);

	return (0);
}

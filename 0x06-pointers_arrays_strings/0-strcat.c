#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 *@dest: the first string
 *@src: the second string
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src);
{
	char *dest = "Hello";
	char *src = "World!";

	/*appends dest onto src*/
	strcat(dest, src);
	printf("strcat(dest, src): %s\n", dest);

	return (0);
}

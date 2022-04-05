#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	dup = malloc(i * sizeof(*dup) + 1);

	if (dup == NULL)
		return (NULL);

	len = 0;
	while (len < i)
	{
		dup[len] = str[len];
		len++;
	}

	dup[len] = '\0';

	return (dup);
}

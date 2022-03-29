#include "main.h"
#define NULL 0
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to search
 * @NUM: character is not found
 * Return: pointer to first occurrence of c
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}

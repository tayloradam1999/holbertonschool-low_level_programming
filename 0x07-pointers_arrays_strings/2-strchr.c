#include "holberton.h"

/**
 * _strchr - Locates a char in a str
 * @s: The string
 * @c: The char
 * Return: The character found or NULL if no char is found
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != '\0')
	{
		s++;
		if (s[x] == c)
		{
			break;
		}
	}

	return (s);
}

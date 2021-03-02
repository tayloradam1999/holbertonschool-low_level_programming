#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Gives length of string
 * @s: Counter
 * Return: Length as an int
 */

char _strlen(char *s)
{
	unsigned int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * _strdup - Returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: String to be copied
 * Return: Pointer
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int x;

	if (str == NULL)
	{
		return (NULL);
	}

	s = (char *)malloc(_strlen(str) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		s[x] = str[x];
	}
	return (s);
}

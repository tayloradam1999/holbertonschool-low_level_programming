#include "holberton.h"

/**
 * string_toupper - Changes lowercase letters to uppercase
 * @str: The string to manipulate
 * Return: The string in all uppercase
 */

char *string_toupper(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] -= 32;
		}
	}

	return (str);
}

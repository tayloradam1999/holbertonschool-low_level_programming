#include "holberton.h"

/**
 * _strstr - Locates a substring
 * @haystack: String
 * @needle: Substring
 * Return: Where the substring is located
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (needle[y] == haystack[x])
				return (needle);
		}
	}
	return ('\0');
}

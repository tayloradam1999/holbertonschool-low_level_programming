#include "holberton.h"

/**
 * _strcpy - Copies a string from one pointer to another
 * @dest: Where the string will be copied to
 * @src: The source of the copied string
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	for (; *(x + src) != '\0'; x++)
	{
		*(dest + x) = *(src + x);
	}
	*(dest + x) = *(src + x);
	return (dest);
}

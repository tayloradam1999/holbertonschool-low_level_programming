#include "holberton.h"

/**
 * _memcpy - Copies memory area
 * @dest: Where memory is copied to
 * @src: Where memory is copied from
 * @n: How many bytes are copied
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (; n > 0; n--)
	{
		dest[n - 1] = src[n - 1];
	{

	return (dest);
}

#include "holberton.h"

/**
 * rot13 - Encodes a string using rot13
 * @x: Pointer
 * Return: The encoded string
 */

char *rot13(char *x)
{
	int y = 0;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char number[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int yy;

	for (; x[y] != '\0'; y++)
	{
		for (yy = 0; letter[yy] != '\0'; yy++)
		{
			if (x[y] == letter[yy])
			{
				x[y] = number[yy];
				break;
			}
		}
	}
	return (x);
}

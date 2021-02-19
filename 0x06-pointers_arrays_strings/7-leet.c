#include "holberton.h"

/**
 * leet - Encodes a string into 1337
 * @x: The string
 * Return: 1337 typing
 */

char *leet(char *x)
{
	int y = 0;
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";
	int yy;

	for (; x[y] != '\0'; y++)
	{
		for (yy = 0; letter[yy] != '\0'; yy++)
		{
			if (x[y] == letter[yy])
			{
				x[y] = number[yy];
			}
		}
	}
	return (x);
}

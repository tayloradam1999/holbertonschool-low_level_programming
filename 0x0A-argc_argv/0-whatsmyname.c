#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints the program name followed by a new line.
 * @argc: Number of commands in terminal
 * @argv: Array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
return (0);
}

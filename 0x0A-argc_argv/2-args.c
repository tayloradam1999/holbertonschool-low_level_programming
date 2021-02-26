#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: Number of commands passed
 * @argv: Array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}
	return (0);
}

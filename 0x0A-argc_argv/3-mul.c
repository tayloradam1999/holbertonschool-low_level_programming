#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Number of commands passed
 * @argv: Array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y;
	int factor;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		factor = x * y;
		printf("%d\n", factor);
	}
	return (0);
}

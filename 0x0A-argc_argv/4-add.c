#include <stdio.h>
#include <stdlib.h>

/**
 * digits - checks if a string contains only numbers
 * @s: The string
 * Return: 1 if true, 0 if false
 */

int digits(char *s)
{
	while (*s)
	{
		if (!(*s >= '0' && *s <= '9'))
		{
			return (0);
		}
		s++;
	}
	return (1);
}

/**
 * main - Adds all command line arguments together
 * @argc: Number of command line arguments
 * @argv: Array of strings
 * Return: 0 if succcess, 1 for fail
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int x = 1;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (x < argc)
	{
		if (digits(argv[x]))
		{
			sum += atoi(argv[x]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		x++;
	}

	printf("%d\n", sum);
	return (0);
}

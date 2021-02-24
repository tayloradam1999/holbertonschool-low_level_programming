#include "holberton.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: Given number
 * Return: Factorial
 */

int factorial(int n)
{
	if (n >= 1)
	{
		return (n * factorial(n - 1));
	}

	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}
	return (n);
}

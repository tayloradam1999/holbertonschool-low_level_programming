#include "holberton.h"

/**
 * num - Determins output value
 * @x: Storing values
 * @n: Storing values
 * Return: 1 if prime, 0 if not
 */

int num(int n, int x)
{
	if (n % x == 0)
	{
		return (0);
	}
	if (x > (n / 2))
	{
		return (1);
	}
	return (num(n, (x + 1)));
}

/**
 * is_prime_number - Finds prime numbers
 * @n: Input int (Number to test)
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (num(n, 2));
}

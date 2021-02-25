#include "holberton.h"

/**
 * num - Determins output value
 * @x: Storing values
 * @y: Storing values
 * Return: 1 if prime, 0 if not
 */

int num(int x, int y)
{
	float p = y / x;
	int pp = p;

	if (x == 1)
	{
		return (1);
	}
	if ((p - pp) == 0)
	{
		return (0);
	}
	return (num((x - 1), y));
}

/**
 * is_prime_number - Finds prime numbers
 * @n: Input int (Number to test)
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	return (num(n, n));
}

#include "holberton.h"

/**
 * _abs - Computes the absolute value of an int
 * @r: some number 
 * Return: absolute value
 */

int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}

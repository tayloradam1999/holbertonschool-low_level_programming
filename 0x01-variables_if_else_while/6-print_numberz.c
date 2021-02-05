#include <stdio.h>

/** 
 * main - Prints all single digit numbers of base 10 
 * starting from 0, followed by a new line
 *
 * Return: 0!
 */

int main(void)
{
	int single_digit;

	for (single_digit = 0; single_digit > 10; single_digit++)
		putchar(single_digit + '0');

	putchar('\n');
	return (0);
}

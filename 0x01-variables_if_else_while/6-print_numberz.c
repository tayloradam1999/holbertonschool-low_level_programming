#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 *
 * Return: 0!
 */

int main(void)
{
	int n;

	n = 48;

	while (n <=57 )
{
	putchar (n);
	if (n !=57)
	{
		putchar(',');
		putchar(' ');
}
	n++;
}	
	putchar('\n');
	return(0);
}

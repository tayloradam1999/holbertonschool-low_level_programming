#include <stdio.h>

/**
 * main - Prints the alphabet in reverse followed by a new line
 *
 * Return: 0!
 */

int main(void)
{
	char rev_alpha;

	for (rev_alpha = 'a' ; rev_alpha < 'z' ; rev_alpha++)
		gets(rev_alpha);

		strrev(rev_alpha);

	putchar(rev_alpha);

	putchar('\n');
	return (0);
}

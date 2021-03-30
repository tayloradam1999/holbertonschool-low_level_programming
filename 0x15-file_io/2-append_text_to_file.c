#include "holberton.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: Name of the file
 * @text_content: Null terminated string to add to end of file
 * Return: 1 on success, 1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	write(fd, text_content, _strlen(text_content));
	return (1);
}

/**
 * _strlen - finds string length
 * @s: String
 * Return: Length
 */

ssize_t _strlen(char *s)
{
	ssize_t x = 0;

	for (; s[x]; x++)
		continue;
	return (x);
}

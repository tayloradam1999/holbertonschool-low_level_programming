#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

int _strlen(char *s)
{
	int x = 0;

	for (; s[x]; x++)
		continue;
	return (x);
}

ssize_t _strlength(char *s)
{
	ssize_t x = 0;

	for (; s[x]; x++)
		continue;
	return (x);
}

#endif

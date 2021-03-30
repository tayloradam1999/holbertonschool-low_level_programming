#include "holberton.h"

int main(int argc, char *argv[])
{
	int fp, fp1, cCheck, cCheck1, rCheck;
	ssize_t write_Check;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(1024);
	if (!buf)
		return (0);
	fp1 = open(argv[1], O_RDONLY);
	if (!fp1 || fp1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fp = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0661);
	if (!fp || fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}
	rCheck = read(fp1, buf, 1024);
	while (rCheck != 0)
	{
		write_Check = write(fp, buf, _strlen(buf));
		if (write_Check == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
			close(fp);
			close(fp1);
			exit(99);
		}
		free(buf);
		buf = malloc(1024);
		if (!buf)
			return (0);
		rCheck = read(fp1, buf, 1024);
	}
	cCheck = close(fp);
	cCheck1 = close(fp1);
	if (cCheck == -1)
	{
		dprintf(STDERR_FILENO, "Error, Can't close fd%d\n", fp);
		close(fp);
		exit(100);
	}
	if (cCheck1 == -1)
	{
		dprintf(STDERR_FILENO, "Error, Can't close fd%d\n", fp1);
		close(fp1);
		exit(100);
	}
	return (0);
}

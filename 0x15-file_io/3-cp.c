#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *buffer(char *file);
void close_file(int fd);

/**
 * buffer - allocates 1024 bytes for a buffer
 * @file: file name for buffer storing chars
 * Return: pointer to new buffer
 */

char *buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - closes file descriptors
 * @fd: file descriptor to be closed
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of elements in array
 * @argv: pointer to an array
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int fileFrom, fileTo, bytesRead, bytesWritten;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = buffer(argv[2]);
	fileFrom = open(argv[1], O_RDONLY);
	bytesRead = read(fileFrom, buff, 1024);
	fileTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fileFrom == -1 || bytesRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		bytesWritten = write(fileTo, buff, bytesRead);

		if (fileTo == -1 || bytesWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

	bytesRead = read(fileFrom, buff, 1024);
	fileTo = open(argv[2], O_WRONLY | O_APPEND);

	}

	while (bytesRead > 0)
		;

	free(buff);
	close_file(fileFrom);
	close_file(fileTo);

	return (0);
}

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return:  the actual number of letters it could
 * read and print or 0 if the file can not be opened or read
 * or if filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t bytesWritten;
	ssize_t bytesRead;

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	bytesRead = read(file, buffer, letters);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	close(file);

	return (bytesWritten);
}

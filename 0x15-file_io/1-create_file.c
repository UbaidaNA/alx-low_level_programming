#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer ot file to be created
 * @text_content: pointer to a string to write to the file
 * Return: 1 on sucess, -1 on failure or if filename is
 * NULL
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int bytesWritten;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 384);
	bytesWritten = write(file, text_content, len);

	if (file == -1 || bytesWritten == -1)
	{
		return (-1);
	}

	close(file);
	return (1);
}

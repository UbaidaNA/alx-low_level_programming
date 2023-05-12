#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: string to add to the end of the file
 * Return: 1 on success and -1 on failure or if filename is NULL
 * or if the file does not exist or if you do not have
 * the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
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

	file = open(filename, O_WRONLY | O_APPEND);
	bytesWritten = write(file, text_content, len);

	if (file == -1 || bytesWritten == -1)
	{
		return (-1);
	}

	close(file);

	return (1);
}

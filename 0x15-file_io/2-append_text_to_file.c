#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 if the file exists and -1 if the file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int append_file, len = 0;
	int bytesWritten;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	append_file = open(filename, O_WRONLY | O_APPEND);
	bytesWritten = write(append_file, text_content, len);

	if (append_file == -1 || bytesWritten == -1)
		return (-1);
	close(append_file);

	return (1);
}

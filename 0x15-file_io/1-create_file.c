#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: Is the name of the file to create
 * @text_content: Is a NULL terminated string intended for writing to the file
 *
 * Return: 1 if succesful or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, bytesWritten, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytesWritten = write(file, text_content, len);

	if (file == -1 || bytesWritten == -1)
		return (-1);

	close(file);

	return (1);
}

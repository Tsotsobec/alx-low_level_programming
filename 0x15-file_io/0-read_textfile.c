#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: File containing the text being processed
 * @letters: The number of letters that should be read and printed
 *
 * Return: The actual number of letters effectively read and printed
 * return 0 if it falis or if the filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t bytesWritten;
	ssize_t bytesRead;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	bytesRead = read(file, buffer, letters);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	close(file);
	return (bytesWritten);
}

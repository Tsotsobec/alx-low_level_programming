#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/* Prototypes */
char *create_buffer(char *NAME_OF_THE_FILE);
void close_NAME_OF_THE_FILE(int FD_VALUE);

/**
 * create_buffer - Reserves memory for a buffer of 1024 bytes
 * @NAME_OF_THE_FILE: The buffer's name represents characters being stored for
 *
 * Return: The pointer to the new allocated buffer
 */

char *create_buffer(char *NAME_OF_THE_FILE)
{
	char *BUFFER_SIZE;

	BUFFER_SIZE = malloc(sizeof(char) * 1024);

	if (BUFFER_SIZE == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", NAME_OF_THE_FILE);
		exit(99);
	}

	return (BUFFER_SIZE);
}

/**
 * close_NAME_OF_THE_FILE - Terminates file descriptors
 * @FD_VALUE: The file descriptor intended for closure
 */

void close_NAME_OF_THE_FILE(int FD_VALUE)
{
	int q;

	q = close(FD_VALUE);

	if (q == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", FD_VALUE);
		exit(100);
	}
}

/**
 * Main - Function that copies the content of a file to another file
 * @argc: The count of arguments provided to the program
 * @argv: Array of pointers pointing to the arguments
 *
 * Return: if the number of argument is not the correct one, exit with code 97
 * if file_from does not exist, or if you can not read it, exit with code 98
 * if you can not create or if write to file_to fails, exit with code 99
 * if you can not close a file descriptor , exit with code 100
 * otherwise return 0 (Successful)
 */

int main(int argc, char *argv[])
{
	char *BUFFER_SIZE;
	int fd_from, fd_to, bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	BUFFER_SIZE = create_buffer(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	bytes_read = read(fd_from, BUFFER_SIZE, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd_from == -1 || bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(BUFFER_SIZE);
			exit(98);
		}
		bytes_written = write(fd_to, BUFFER_SIZE, bytes_read);

		if (fd_to == -1 || bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(BUFFER_SIZE);
			exit(99);
		}
		bytes_read = read(fd_from, BUFFER_SIZE, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (bytes_read > 0);

	free(BUFFER_SIZE);
	close_NAME_OF_THE_FILE(fd_from);
	close_NAME_OF_THE_FILE(fd_to);

	return (0);
}

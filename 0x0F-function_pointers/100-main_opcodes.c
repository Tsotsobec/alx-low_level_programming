#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *arr;

	if (argc != 2)
	{
		printf("Usage: %s <number_of_bytes>\n", argv[0]);
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes <= 0)
	{
		printf("Error: Please enter a positive number of bytes.\n");
		return (2);
	}

	arr = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}

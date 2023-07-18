#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	prntf("%s\n", _FILE_);
	return (0);
}

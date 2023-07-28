#include <unistd.h>

/**
 * _putchar - Writes the char c to standard output
 * @c: The char to print
 *
 * Return: 1 (Success)
 * On Error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}

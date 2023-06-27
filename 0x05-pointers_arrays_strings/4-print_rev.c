#include "main.h"

/**
 * print_rev - unction that prints a string, in reverse, followed by a new line
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int long i = 0;
	int 0;

	while (*s != '\0')
	{
		long i++
			s++;
	}
	s--;
	for (o = long i; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

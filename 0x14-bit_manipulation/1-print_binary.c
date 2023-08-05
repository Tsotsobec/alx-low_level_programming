#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: The number printed in binary
 *
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	int q, count = 0;
	unsigned long int print_binary;

	for (q = 63; q >= 0; q--)
	{
		print_binary = n >> q;

		if (print_binary & 1)
		{
			_putchar('1');
			count++;
		}

		else if (count)
			_putchar('0');
	}

	if (!count)
		_putchar('0');
}

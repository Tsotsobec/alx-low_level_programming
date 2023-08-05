#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * You would need to flip to get from one number to another
 * @n: The First digit
 * @m: The secomd digit
 *
 * Return: The number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, count = 0;
	unsigned long int num_flips;
	unsigned long int xor_result = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		num_flips = xor_result >> p;

		if (num_flips & 1)
			count++;
	}

	return (count);
}

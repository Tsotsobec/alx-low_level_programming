#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts binary number to an unsigned int
 * @b: The string that contains the binary number
 *
 * Return: The converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int bi_num = 0;

	if (!b)
		return (0);

	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
			return (0);
		bi_num = 2 * bi_num + (b[p] - '0');
	}

	return (bi_num);
}

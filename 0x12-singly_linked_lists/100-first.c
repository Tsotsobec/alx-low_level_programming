#include <stdio.h>

void First(void) __attribute__ ((constructor));

/**
 * First - function that prints a sentence
 * before the main function is executed
 *
 * Return: Void
 */

void First(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

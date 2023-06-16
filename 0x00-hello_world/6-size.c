#include <stdio.h>
/**
 * main - program that prints the size of various datra types
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %d bytes\n", sizeof(char));
	printf("Size of int: %d bytes\n", sizeof(int));
	printf("Size of long int: %d bytes\n", sizeof(long int));
	printf("Size of long long int: %d bytes\n", sizeof(long long int));
	printf("Size of float: %d bytes\n", sizeof(float));

	return (0);
}

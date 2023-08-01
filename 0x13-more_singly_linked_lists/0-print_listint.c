#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function that prints all the elements of list 'listint_t'
 * @h: singly linked list 'listint_t' to print
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}

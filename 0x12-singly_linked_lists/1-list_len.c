#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns number of elements in linked list 'list_t'
 * @h: Pointer to linked list 'list_t'
 *
 * Return: number of elements in linked list 'list_t'
 */

size_t list_len(const list_t *h)
{
	size_t q = 0;

	while (h)
	{
		q++;
		h = h->next;
	}

	return (q);
}

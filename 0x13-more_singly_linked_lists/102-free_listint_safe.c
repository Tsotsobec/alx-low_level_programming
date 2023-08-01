#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - function that frees list listint_t
 * @h: The pointer to the 1st node of list listint_t
 *
 * Return: The size of the list listint_t that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *free_listint;
	int p;
	size_t len = 0;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		p = *h - (*h)->next;
		if (p > 0)
		{
			free_listint = (*h)->next;
			free(*h);
			*h = free_listint;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - function that frees list listint_t
 * @head: Pointer to list listint_t to be freed
 *
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_free;

	if (head == NULL)
		return;

	while (*head)
	{
		temp_free = (*head)->next;
		free(*head);
		*head = temp_free;
	}
	*head = NULL;
}

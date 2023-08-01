#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - function that frees list listint_t
 * @head: To free list listint_t
 *
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}

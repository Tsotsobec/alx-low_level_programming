#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of a list listint_t
 * @head: Pointer to 1st element of list listint_t
 *
 * Return: the data from the head node or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *head_node;
	int p;

	if (!head || !*head)
		return (0);

	p = (*head)->n;
	head_node = (*head)->next;
	free(*head);
	*head = head_node;

	return (p);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds new node at the end of a list listint_t
 * @head: Pointer to 1st element on list listint_t
 * @n: Data to be inserted on new element
 *
 * Return: the address of new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_end;
	listint_t *temp_node = *head;

	node_end = malloc(sizeof(listint_t));

	if (!node_end)
		return (NULL);

	node_end->n = n;
	node_end->next = NULL;

	if (*head == NULL)
	{
		*head = node_end;
		return (node_end);
	}

	while (temp_node->next)
		temp_node = temp_node->next;
	temp_node->next = node_end;

	return (node_end);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index index of list listint_t
 * @head: The pointer to the 1st element of list listint_t
 * @index: The index of the node to be deleted
 *
 * Return: 1 if Successful or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete_node = NULL;
	listint_t *temp_node = *head;
	unsigned int q = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}

	while (q < index - 1)
	{
		if (!temp_node || !(temp_node->next))
			return (-1);
		temp_node = temp_node->next;
		q++;
	}

	delete_node = temp_node->next;
	temp_node->next = delete_node->next;
	free(delete_node);

	return (1);
}

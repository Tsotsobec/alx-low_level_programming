#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts new node at a given position
 * @head: Pointer to the 1st node of list listint_t
 * @idx: the index of the list listint_t where the new node should be added
 * @n: The data to be added onto new node
 *
 * Return: the address of the new node, or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp_node = *head;
	unsigned int p;

	new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (p = 0; temp_node && p < idx; p++)
	{
		if (p == idx - 1)
		{
			new_node->next = temp_node->next;
			temp_node->next = new_node;
			return (new_node);
		}

		else
			temp_node = temp_node->next;
	}

	return (NULL);
}

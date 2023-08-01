#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the nth node of list listint_t
 * @head: The 1st node on list listint_t
 * @index: the index of the node starting at 0
 *
 * Return: the node of listint_t, if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node = head;
	unsigned int q = 0;

	while (nth_node && q < index)
	{
		nth_node = nth_node->next;
		q++;
	}

	return (nth_node ? nth_node : NULL);
}

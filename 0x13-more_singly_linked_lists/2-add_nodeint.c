#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function that adds new node at the beginning of list listint_t
 * @head: Pointer to the 1st node of the list
 * @n: Data to be inserted in new node
 *
 * Return: the address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

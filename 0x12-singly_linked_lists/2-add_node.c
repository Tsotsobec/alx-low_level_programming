#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of list 'list_t'
 * @head: Double pointer to list 'list_t'
 * @str: New string to be added to thr node
 *
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *NewNode;
	unsigned int len = 0;

	while (str[len])
		len++;
	NewNode = malloc(sizeof(list_t));
	if (!NewNode)
		return (NULL);
	NewNode->str = strdup(str);
	NewNode->len = len;
	NewNode->next = (*head);
	(*head) = NewNode;

	return (*head);
}

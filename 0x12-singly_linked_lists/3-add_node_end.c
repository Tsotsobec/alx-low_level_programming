#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of the list 'list_t'
 * @head: Double pointer to the list 'list_t'
 * @str: String placed on the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NewNode;
	list_t *TempNode = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	NewNode = malloc(sizeof(list_t));

	if (!NewNode)
		return (NULL);
	NewNode->str = strdup(str);
	NewNode->len = len;
	NewNode->next = NULL;

	if (*head == NULL)
	{
		*head = NewNode;
		return (NewNode);
	}

	while (TempNode->next)
		TempNode = TempNode->next;
	TempNode->next = NewNode;

	return (NewNode);
}

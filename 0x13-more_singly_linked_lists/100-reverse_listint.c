#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - function that reverses list listint_t
 * @head: The pointer to the 1st node of list listint_t
 *
 * Return: The pointer to the 1st node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *reverse_listint = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = reverse_listint;
		reverse_listint = *head;
		*head = next;
	}

	*head = reverse_listint;

	return (*head);
}

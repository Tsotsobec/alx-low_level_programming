#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/* Prototypes */
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Calculates unique number of nodes in list listint_t
 * @head: The pointer to the head of list listint_t to be checked
 *
 * Return: The number of nodes in list listint_t
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *node1, *node2;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	node1 = head->next;
	node2 = (head->next)->next;

	while (node2)
	{
		if (node1 == node2)
		{
			node1 = head;
			while (node1 != node2)
			{
				nodes++;
				node1 = node1->next;
				node2 = node2->next;
			}
			node1 = node1->next;
			while (node1 != node2)
			{
				nodes++;
				node1 = node1->next;
			}
			return (nodes);
		}
		node1 = node1->next;
		node2 = (node2->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - function that prints list listint_t
 * @head: The pointer to the head of list listint_t
 *
 * Return: The number of nodes in list listint_t
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}

#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees list 'list_t'
 * @head: List 'list_t' to be freed
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tempList;

	while (head)
	{
		tempList = head->next;
		free(head->str);
		free(head);
		head = tempList;
	}
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - Returns the sum of all the data (n) of list listint_t
 * @head: The 1st node of list listint_t
 *
 * Return: The sum of all the data, if the list is empty return 0
 */

int sum_listint(listint_t *head)
{
	listint_t *data = head;
	int sum = 0;

	while (data)
	{
		sum += data->n;
		data = data->next;
	}

	return (sum);
}

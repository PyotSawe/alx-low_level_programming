#include <stdlib.h>
#include "lists.h"

/**
  * sum_dlistint - Sum of all data (n) in a doubly linked list
  * @head: The head of the doubly linked list
  *
  * Return: The sum of all data
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_d = head;
	int sum = 0;

	if (head)
	{
		while (current_d != NULL)
		{
			sum += current_d->n;
			current_d = current_d->next;
		}
	}

	return (sum);
}

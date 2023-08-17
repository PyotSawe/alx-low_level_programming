#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_dnodeint_at_index - ...
  * @head: ...
  * @index: ...
  *
  * Return: ...
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_d = NULL, *temp = NULL;
	unsigned int length = 0;

	if (head && *head)
	{
		length = dlistint_len(*head);
		if (index > length)
			return (-1);

		if (index == 0)
			return (delete_first_dnode(head));

		current_d = get_dnodeint_at_index(*head, index);
		if (current_d)
		{
			temp = current_d;
			if (length - 1 == index)
				current_d->prev->next = current_d->next;
			else
			{
				current_d->prev->next = current_d->next;
				current_d->next->prev = current_d->prev;
			}

			free(temp);
			return (1);
		}
	}

	return (-1);
}

/**
  * delete_first_dnode - Remove the first node of a doubly linked list
  * @head: The head of the doubly linked list
  *
  * Return: 1 if is deleted
  */
int delete_first_dnode(dlistint_t **head)
{
	dlistint_t *current_d = *head, *temp = NULL;

	temp = current_d;
	if (current_d->next)
	{
		current_d = current_d->next;
		current_d->prev = temp->prev;
		*head = current_d;
	}
	else
	{
		*head = NULL;
	}

	free(temp);
	return (1);
}

/**
  * get_dnodeint_at_index - Gets a node from a doubly linked list
  * @head: The head of the doubly linked list
  * @index: The index to find in the doubly linked list
  *
  * Return: The specific node of the doubly linked list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_d = head;
	unsigned int iter_times = 0;

	if (head)
	{
		while (current_d != NULL)
		{
			if (iter_times == index)
				return (current_d);

			current_d = current_d->next;
			++iter_times;
		}
	}

	return (NULL);
}

/**
  * dlistint_len - Counts the number of elements in a doubly linked list
  * @h: The double linked list to count
  *
  * Return: Number of elements in the doubly linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		++len;
		h = h->next;
	}

	return (len);
}

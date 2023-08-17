#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * free_dlistint - Free a doubly linked list
  * @head: The head of the doubly linked list
  *
  * Return: Nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_d = head, *next = NULL;

	while (current_d != NULL)
	{
		next = current_d->next;
		free(current_d);
		current_d = next;
	}
}

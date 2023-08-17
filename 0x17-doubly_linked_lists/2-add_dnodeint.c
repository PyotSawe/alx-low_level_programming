#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_dnodeint - Adds a newd node at the beginning
  * of a doubly linked list
  * @head: The head of the doubly linked list
  * @n: The number to place in the newd node
  *
  * Return: The newd head of the doubly linked list
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newd_node = NULL;

	newd_node = malloc(sizeof(dlistint_t));
	if (newd_node == NULL)
		return (NULL);

	newd_node->n = n;
	if (*head)
	{
		newd_node->next = *head;
		newd_node->prev = (*head)->prev;
		(*head)->prev = newd_node;
		*head = newd_node;
		return (*head);
	}

	newd_node->next = *head;
	newd_node->prev = NULL;
	*head = newd_node;
	return (*head);
}

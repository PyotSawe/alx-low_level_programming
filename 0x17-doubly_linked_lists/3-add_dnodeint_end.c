#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint_end - Adds a newd node at the end
  * of a doubly linked list
  * @head: The head of the doubly linked list
  * @n: The number to place in the newd node
  *
  * Return: The newd head of the doubly linked list
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cur = NULL, *newd_node = NULL;

	newd_node = malloc(sizeof(dlistint_t));
	if (newd_node == NULL)
		return (NULL);

	newd_node->n = n;
	if (*head)
	{
		cur = *head;
		while (cur->next != NULL)
			cur = cur->next;

		newd_node->next = NULL;
		newd_node->prev = cur;
		cur->next = newd_node;
		return (newd_node);
	}

	newd_node->next = *head;
	newd_node->prev = NULL;
	*head = newd_node;
	return (*head);
}

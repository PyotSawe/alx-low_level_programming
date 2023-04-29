#include "lists.h"

/**
 * free_list - clear a linked list
 * @head: list_t head
 */

void free_list(list_t *head)
{
	list_t *temp;/* temp node */

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}


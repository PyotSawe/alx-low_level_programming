#include <stdio.h>
#include "lists.h"

/**
 * print_list - display by printing the elements of linked lists
 * @h: pointer to linked list
 *
 * Return: the number
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)/* Process only non-null*/
	{
		/*printf("[%u] ", h->len);*/
		if (!h->str)/*print nil if Zero*/
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;/*Move to next node*/
		len++;
	}
	return (len);
}


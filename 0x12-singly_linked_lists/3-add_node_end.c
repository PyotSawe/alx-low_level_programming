#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 * @head: A pointer the head.
 * @str: The str to be added.
 *
 * Return: If the function fails - NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new_node, *tail; /*define the head and tail of list*/

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)/*Handle malloc Exceptions*/
		return (NULL);
	dup = strdup(str);
	if (str == NULL) /*Handle strdup Exceptions*/
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[++len];)
		;/*Calculate len of str*/
	/*Built the new node*/
	new_node->str = dup;
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new_node;
	}
	return (*head);
}

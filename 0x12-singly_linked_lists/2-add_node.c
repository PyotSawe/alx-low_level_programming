#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to pointer to head
 * @str: new string to add
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *added;
	int len = 0;

	while (str[len])
		len++;/*Calculate len of str*/
	added = malloc(sizeof(list_t));
	if (added == NULL)
		return (NULL);/*don't proceed if malloc had error*/
	/*Built the node*/
	added->str = strdup(str);
	added->len = len;
	added->next = *head;
	*head = added;
	return (added);
}

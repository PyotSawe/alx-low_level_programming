#include "lists.h"
/**
 * list_len - gets the lenOf(linkedList)
 * @h: head of linkedList
 *
 * Return: number of nodes as size_t
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;/* currently len is 0*/

	while (h != NULL)
	{
		h = h->next;/*move to next node*/
		len++;/*update len*/
	}
	return (len);
}

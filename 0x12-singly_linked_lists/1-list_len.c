#include "lists.h"
/**
 *list_len:-function count element the a linked list
 *@h: linked list
 * Return: long linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

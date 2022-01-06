#include "lists.h"
/**
 *dlistint_len:-function leng doublylinked list
 *@h: long list
 * Return: long linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	if (h)
	{
		for (elements = 0; h ; elements++)
			h = h->next;
		return (elements);
	}
	return (elements);
}

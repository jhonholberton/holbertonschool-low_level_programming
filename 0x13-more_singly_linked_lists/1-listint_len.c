#include "lists.h"
/**
 *listint_len -the number of elements in a linked listint_t list.
 *@h: linked list
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

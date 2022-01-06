#include "lists.h"
/**
 *print_dlistint:-function print doublylinked list
 *@h: linked list
 * Return: long linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h)
	{
		int elmets = 0;

		while (h)
		{
			printf("%d\n", h->n);
			elmets++;
			h = h->next;
		}
		return (elmets);
	}
	return (0);
}

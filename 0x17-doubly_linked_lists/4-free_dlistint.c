#include "lists.h"
/**
 * free_dlistint - free doublylinklist.
 * @head: doubly linkt list
 *
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		dlistint_t *tmp;

		while (head)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
	}
}

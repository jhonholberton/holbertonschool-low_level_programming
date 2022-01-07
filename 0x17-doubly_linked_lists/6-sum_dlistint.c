#include "lists.h"
/**
 *sum_dlistint:-func sum all cont node
 *@head: linked list
 * Return: long linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

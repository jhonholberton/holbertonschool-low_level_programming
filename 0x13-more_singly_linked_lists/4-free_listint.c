
#include "lists.h"
/**
 *free_listint - function that frees a listint_t list.
 *@head: linked list
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *intet;

	while (head)
	{
		intet = head->next;
		free(head->n);
		free(head);
		head = intet;
	}
}

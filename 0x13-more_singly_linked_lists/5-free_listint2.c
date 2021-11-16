#include "lists.h"
/**
 *free_listint2- function that frees a listint_t list.
 *@head: linked list
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *nodo = NULL;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			nodo = (*head)->next;
			free(*head);
			*head = nodo;
		}
	}
}

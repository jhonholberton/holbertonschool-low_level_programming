#include "lists.h"
/**
 *pop_listint - function that deletes the head node of a listint_t linked list
 *@head: linked list
 *Return: returns the head node’s data (n) or if the linked list is empty 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *nodo = NULL;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	nodo = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = nodo;
	return (n);
}

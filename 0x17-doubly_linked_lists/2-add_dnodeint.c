#include "lists.h"
/**
 *add_dnodeint:-function add new nod doublylinked list
 *@head:-Dlink
 *@n:-int
 * Return: long linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodo;

	new_nodo = malloc(sizeof(dlistint_t));
	if (!new_nodo)
		return (NULL);
	new_nodo->n = n;
	new_nodo->next = NULL;
	new_nodo->prev = NULL;
	if (!*head)
	{
		*head = new_nodo;
	}
	else
	{
		new_nodo->next = *head;
		(*head)->prev = new_nodo;
		*head = new_nodo;
	}
	return (new_nodo);
}

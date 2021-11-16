#include "lists.h"
/**
 *add_nodeint -hat adds a new node at the beginning of a listint_t list.
 *@head: linked list
 *@n:int
 * Return:  the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnodo;

	newnodo = malloc(sizeof(listint_t));
	if (!newnodo)
		return (NULL);
	newnodo->n = n;
	if (!*head)
		newnodo->next = NULL;
	else
		newnodo->next = *head;
	*head = newnodo;

	return (*head);
}

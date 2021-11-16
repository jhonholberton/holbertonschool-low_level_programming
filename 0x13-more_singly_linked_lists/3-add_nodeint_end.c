#include "lists.h"
/**
 *add_nodeint_end - adds a new node at the end of a listint_t list.
 *@head: head linked list
 *@n: int
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnodo, *intet;

	intet = *head;
	newnodo = malloc(sizeof(listint_t));
	if (!newnodo)
		return (NULL);
	newnodo->n = n;
	if (!*head)
	{
		*head = newnodo;
		return (newnodo);
	}
	while (intet->next)
	{
		intet = intet->next;
	}
	intet->next = newnodo;
	return (newnodo);
}

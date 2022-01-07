#include "lists.h"
/**
 *insert_dnodeint_at_index:-function add new nod doublylinked list
 *@h:-Dlink
 *@n:-int
 *@idx:-index
 * Return: long linked list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new_nodo;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_nodo = malloc(sizeof(dlistint_t));
	if (new_nodo == NULL)
		return (NULL);

	new_nodo->n = n;
	new_nodo->prev = tmp;
	new_nodo->next = tmp->next;
	tmp->next->prev = new_nodo;
	tmp->next = new_nodo;

	return (new_nodo);
}

#include "lists.h"
/**
 *get_dnodeint_at_index:-funt shearch n nodo
 *@head: linked list
 *@index: index nodo
 * Return: long linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	size_t cont;

	for (cont = 0; tmp; cont++)
	{
		if (index == cont)
			return (tmp);
		tmp = tmp->next;
	}

	return (NULL);
}

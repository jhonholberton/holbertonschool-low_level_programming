#include "lists.h"
/**
 *get_nodeint_at_index -function the nth node of a listint_t linked list.
 *@head: linked list
 *@index:  index of the node, starting at 0
 *Return:  returns the nth node or if the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nodos = head;
	unsigned int counter = 0;

	while (nodos)
	{
		counter++;
		nodos = nodos->next;
	}
	if (index >= counter)
	{
		return (NULL);
	}
	counter = 0;
	nodos = head;
	while (counter < index)
	{
		counter++;
		nodos = nodos->next;
	}
	return (nodos);
}

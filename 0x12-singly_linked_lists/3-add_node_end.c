#include "lists.h"
/**
 *add_node_end:-function print linked list
 *@head: head linked list
 *@str: new element
 * Return: long linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnodo, *intet;

	intet = *head;
	newnodo = malloc(sizeof(list_t));
	if (!newnodo)
		return (NULL);
	newnodo->str = strdup(str);
	newnodo->len = strlen(str);
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

#include "lists.h"
/**
 *add_node:-add new nodo a linked list
 *@head: linked list
 *@str:string
 * Return: long linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnodo;

	newnodo = malloc(sizeof(list_t));
	if (!newnodo)
		return (NULL);
	newnodo->str = strdup(str);
	newnodo->len = strlen(str);
	if (!*head)
		newnodo->next = NULL;
	else
		newnodo->next = *head;
	*head = newnodo;

	return (*head);
}

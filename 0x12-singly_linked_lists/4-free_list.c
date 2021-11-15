#include "lists.h"
/**
 *free_list:-free linked list
 *@head: linked list
 * Return: long linked list
 */
void free_list(list_t *head)
{
	list_t *intet;

	while (head)
	{
		intet = head->next;
		free(head->str);
		free(head);
		head = intet;
	}
}

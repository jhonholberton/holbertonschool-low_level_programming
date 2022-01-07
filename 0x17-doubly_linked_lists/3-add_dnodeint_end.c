#include "lists.h"
/**
 * add_dnodeint_end - Añade un nuevo nodo al final de la lista.
 * @head: doble puntero a la lista.
 * @n: contenido del nuevo nodo.
 * Return: Nuevo nodo
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nuevo = NULL;
	dlistint_t *temporal = *head;

	nuevo = malloc(sizeof(dlistint_t));
	if (nuevo != NULL)
	{
		nuevo->n = n;
		nuevo->next = NULL;

		if (*head == NULL)
		{
			nuevo->prev = NULL;
			*head = nuevo;
			return (nuevo);
		}

		while (temporal->next)
		{
			temporal = temporal->next;
		}
		nuevo->prev = temporal;
		temporal->next = nuevo;
	}
	return (nuevo);
}

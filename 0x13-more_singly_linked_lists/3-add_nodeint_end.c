#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a listint_t list.
 * @head: ptr to first element of the lists.
 * @n: int to set in new node.
 * Return: address of the new element, or NULL if it fails.
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *verve, *aux = *head;

	verve = malloc(sizeof(listint_t));
	if (verve == NULL)
		return (NULL);
	verve->n = n;
	verve->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = verve;
	}
	else
		*head = verve;

	return (verve);
}

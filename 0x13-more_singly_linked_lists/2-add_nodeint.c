#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a listint_t list.
 * @head: ptr to first element of the list.
 * @n: int to set in the new node.
 * Return: address of new element, or NULL if it fails
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *verve;

	verve = malloc(sizeof(listint_t));
	if (verve == NULL)
		return (NULL);
	verve->n = n;
	verve->next = *head;
	*head = verve;

	return (verve);
}

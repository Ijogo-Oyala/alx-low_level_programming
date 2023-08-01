#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a particular  position.
 * @head: ptr to list.
 * @idx: position to add node.
 * @n: data for new node.
 * Return: the address of the new node, or NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux_node = *head;
	listint_t *other_node;
	unsigned int index;
	unsigned int array = 0;

	/* creates node */
	other_node = malloc(sizeof(listint_t));
	if (other_node == NULL)
		return (NULL);
	other_node->n = n;

	/* border case for insert at beginning */
	if (idx == 0)
	{
		other_node->next = *head;
		*head = other_node;
		return (*head);
	}
	/* search for  position to insert */
	index = idx - 1;
	while (aux_node && array != index)
	{
		array++;
		aux_node = aux_node->next;
	}

	/* general case */
	if (array == index && aux_node)
	{
		other_node->next = aux_node->next;
		aux_node->next = other_node;
		return (other_node);
	}

	free(other_node);
	return (NULL);
}

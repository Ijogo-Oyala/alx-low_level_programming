#include "lists.h"

/**
 * free_listint2 - frees listint_t list.
 * the function sets head to NULL.
 * @head: ptr to list.
 **/
void free_listint2(listint_t **head)
{
	listint_t *main_node;
	listint_t *next_node;

	if (!head)
		return;

	main_node = *head;
	next_node = (*head)->next;
	while (next_node)
	{
		free(main_node);
		main_node = next_node;
		next_node = next_node->next;
	}
	free(main_node);
	*head = NULL;
}

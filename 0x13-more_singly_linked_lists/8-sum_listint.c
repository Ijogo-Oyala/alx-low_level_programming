#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) of listint_t list.
 * @head: ptr to list.
 * Return: sum of all data in list, 0 if lost is empty
 **/
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int plus = 0;

	while (node)
	{
		plus += node->n;
		node = node->next;
	}
	return (plus);
}

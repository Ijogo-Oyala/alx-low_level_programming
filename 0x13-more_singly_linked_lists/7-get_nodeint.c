#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of listint_tlinked list.
 * @head: ptr to list.
 * @index: nth node.
 * Return: nth node, if node doesn't exist, return NULL.
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int array = 0;

	while (node && array != index)
	{
		array++;
		node = node->next;
	}
	if (node && array == index)
		return (node);
	return (NULL);
}

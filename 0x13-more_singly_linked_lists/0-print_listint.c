#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list.
 * @h: ptr to the list.
 * Return: numbr of nodes.
 **/
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t arrow = 0;

	while (node)
	{
		printf("%i\n", node->n);
		arrow++;
		node = node->next;
	}

	return (arrow);
}

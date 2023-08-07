#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - It sets the value of a bit to 0 at a given index.
 * @n: parameters to be used
 *
 * @index: index to be used, starting from 0.
 *
 * Return: it works 1
 *	Otherwise, -1 if error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

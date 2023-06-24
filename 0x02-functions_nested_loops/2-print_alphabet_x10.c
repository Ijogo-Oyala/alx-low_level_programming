#include "main.h"

/**
 * print_alphabet - prints lower alphabets 10 times
 */
void print_alphabet(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);
	_putchar('\n');
	}
}

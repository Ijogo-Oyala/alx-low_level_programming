#include "main.h"

/**
 * Print_alphabetx10 - prints 10 times the alphabet, in lowercate
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= '2')
		{
			_putchar(ch);
			ch++;
		}
		_putchar("\n");
		i++;
	}
}

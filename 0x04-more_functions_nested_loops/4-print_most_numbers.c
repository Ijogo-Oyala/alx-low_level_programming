#include "stdio.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return return nothing
 */
void print_most_numbers(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		if ((number == 50) || (number == 52))
		{
			continue;
		}
		putchar(number);
	}
	putchar(10);
}

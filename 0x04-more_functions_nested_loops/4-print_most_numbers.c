#include "main.h"

/**
 * print_most_numbers - numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
			i++;
		else
		{
			_putchar('0' + i);
			i++;
		}
	}
	_putchar('\n');
}

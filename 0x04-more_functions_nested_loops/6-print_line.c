#include "main.h"

/**
 * print_line - numbers from 0 to 9
 * @c: parameter
 */

void print_line(int c)
{
	int i = 1;

	if (c <= 0)
		_putchar('\n');
	else
	{
		while (i <= c)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}

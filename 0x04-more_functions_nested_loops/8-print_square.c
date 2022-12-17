#include "main.h"

/**
 * print_square - numbers from 0 to 9
 * @c: parameter
 */

void print_square(int c)
{
	int i = 1;
	int j;

	if (c <= 0)
		_putchar('\n');
	else
	{
		while (i <= c)
		{
			for (j = 1; j <= c; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
			j = 1;
			i++;
		}
	}
}

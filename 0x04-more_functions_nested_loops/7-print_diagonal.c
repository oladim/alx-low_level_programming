#include "main.h"

/**
 * print_diagonal - numbers from 0 to 9
 * @c: parameter
 */

void print_diagonal(int c)
{
	int i = 1;
	int j;

	if (c <= 0)
		_putchar('\n');
	else
	{
		while (i <= c)
		{
			for (j = 1; j <= i; j++)
			{
				if (j == i)
				{
					_putchar(92);
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
			j = 1;
			i++;
		}
	}
}

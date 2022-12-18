#include "main.h"

/**
 * print_triangle - numbers from 0 to 9
 * @c: parameter
 */

void print_triangle(int c)
{
	int i = 1;

	if (c <= 0)
		_putchar('\n');
	else
	{
		while (i <= c)
		{
			int q;

			for (q = c; q >= 1; q--)
			{
				if (q == i)
				{
					int k;

					for (k = 1; k <= q; k++)
					{
						_putchar('#');
					}
					break;
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
			i++;
		}
	}
}

#include "main.h"

/**
 * times_table - function to print 9 times table
 */

void times_table(void)
{
	int i = 0;
	int k;
	int j;

	while (i < 10)
	{
		for (k = 0; k <= 9; k++)
		{
			j = i * k;
			if (j < 10)
			{
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
			if (k == 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}

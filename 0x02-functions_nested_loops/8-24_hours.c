#include "main.h"

/**
 * jack_bauer - print 24 hours
 *
 */

void jack_bauer(void)
{
	int i;
	int k;
	int j;

	for (i = 0; i <= 2; i++)
	{
		for (k = 0; k <= 3; k++)
		{
			for (j = 0; j <= 59; j++)
			{
				_putchar('0' + i);
				_putchar('0' + k);
				_putchar(':');
				if (j <= 9)
				{
					_putchar('0' + 0);
					_putchar('0' + j);
					_putchar('\n');
				}
				else
				{
					_putchar('0' + j / 10);
					_putchar('0' + j % 10);
					_putchar('\n');
				}
			}
		}
	}
}

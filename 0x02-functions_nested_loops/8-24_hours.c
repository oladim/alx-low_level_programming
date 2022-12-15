#include "main.h"

/**
 * jack_bauer - print 24 hours
 *
 */

void jack_bauer(void)
{
	int k;
	int j;

		for (k = 0; k <= 23; k++)
		{
			for (j = 0; j <= 59; j++)
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
				_putchar(':');
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
				_putchar('\n');
			}
		}
}

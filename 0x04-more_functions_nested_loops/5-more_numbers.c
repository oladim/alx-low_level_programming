#include "main.h"

/**
 * more_numbers - numbers from 0 to 14
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	for (j = 1; j <= 10; j++)
	{
		while (i <= 14)
		{
			if (i >= 10)
				_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			i++;
		}
		_putchar('\n');
		i = 0;
	}
}

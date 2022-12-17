#include "main.h"

/**
 * more_numbers - numbers from 0 to 14
 */

void more_numbers(void)
{
	int i = 0;

	while (i <= 14)
	{
		if (i >= 10)
			_putchar('0' + (i / 10));
		_putchar('0' + (i % 10));
		i++;
	}
	_putchar('\n');
}

#include "main.h"
#include <string.h>

/**
 * puts2 - prints every character
 * @str: parameter
 */

void puts2(char *str)
{
	int len;
	int counter = 0;

	len = strlen(str) - 1;

	while (counter <= len)
	{
		_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}

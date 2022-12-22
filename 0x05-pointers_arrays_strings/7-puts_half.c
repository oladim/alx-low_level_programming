#include "main.h"
#include <string.h>

/**
 * puts_half - prints half characters
 * @str: parameter
 */

void puts_half(char *str)
{
	int len;
	int counter = 0;
	int v;

	len = strlen(str);

	if ((len % 2) == 0)
	{
		v = (len / 2);
		while (v <= len)
		{
			_putchar(str[v]);
			v++;
		}
	}
	else
	{
		v = ((len - 1) / 2) - 1;
		while (counter <= v)
		{
			_putchar(str[counter]);
			counter++;
		}
	}
	_putchar('\n');
}

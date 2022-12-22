#include "main.h"
#include <string.h>

/**
 * puts_half - prints half characters
 * @str: parameter
 */

void puts_half(char *str)
{
	int len;
	int v;

	len = strlen(str);

	if ((len % 2) == 0)
	{
		v = (len / 2);
		while (v <= (len - 1))
		{
			_putchar(str[v]);
			v++;
		}
	}
	else
	{
		v = ((len - 1) / 2) + 1;
		while (v <= (len - 1))
		{
			_putchar(str[v]);
			v++;
		}
	}
	_putchar('\n');
}

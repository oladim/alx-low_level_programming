#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print string value
 * @s: parameter to print
 */

void print_rev(char *s)
{
	int i = 0;
	int len = (int) strlen(s) - 1;

	while (len >= i)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}

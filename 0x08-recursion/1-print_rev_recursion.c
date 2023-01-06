#include "main.h"

/**
 * _print_rev_recursion - function using recursion to print
 * @s: param
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

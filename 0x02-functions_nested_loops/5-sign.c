#include "main.h"

/**
 *print_sign - file to print
 *
 * @n: parameter
 * Return: Always 0 Success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0' + 0);
		return (0);
	}
}

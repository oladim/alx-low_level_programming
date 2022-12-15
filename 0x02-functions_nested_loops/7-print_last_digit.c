#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - a function to print last digit of a value
 *
 * @v: parameter to get its last value
 *
 * Return: absolute value of the reminder
 */

int print_last_digit(int v)
{
	int mod = abs(v % 10);

	_putchar('0' + mod);
	return (mod);
}

#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 Success
 */

int main(void)
{
	int r;

	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

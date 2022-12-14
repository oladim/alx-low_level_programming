#include "main.h"

/**
 * main - entry point fpr the progrm
 *
 * Return: (0) Success
 */

int main(void)
{
	int r;

	r = print_sign(-6);
	_putchar(',');
	_putchar(' ');
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

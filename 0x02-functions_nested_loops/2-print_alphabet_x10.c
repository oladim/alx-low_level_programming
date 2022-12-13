#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_alphabet_x10 - program to print a to z in lowercase
 *
 * Return: Always 0 Success
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int k = 1;

	while (k <= 10)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	k++;
	}
}

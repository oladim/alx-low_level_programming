#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_alphabet - program to print a to z in lowercase
 *
 * Return: Always 0 Success
 */

void print_alphabet(void)
{
	int i = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - program to start
 *
 * Return: Always 0 Success
 */

int main(void)
{
	int i = 0;
	char toprint[] = "_putchar";

	while (i < (int) strlen(toprint) - 1)
	{
		_putchar(toprint[i]);
	}
	_putchar('\n');
	return (0);
}

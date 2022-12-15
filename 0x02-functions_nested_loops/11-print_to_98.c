#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - printing ascending or descending
 *
 * @n: parameter
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d%c%c", i, 44, 32);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d%c%c", i, 44, 32);
		}
	}
	printf("\n");
}

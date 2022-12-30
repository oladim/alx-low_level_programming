#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_array - function to print array
 *
 * @a: array parameter
 * @n: number of occurence
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}

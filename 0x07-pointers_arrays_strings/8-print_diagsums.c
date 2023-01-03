#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - scan through diagonal and print
 * @a: the int 1 dimentional array
 * @size: dimension of array
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size + 1;
	int q = size - 1;
	int sumd = 0;
	int sumu = 0;

	while (i < size * size)
	{
		sumd += a[i];
		if (q <= (size * (size - 1)))
		{
			sumu += a[q];
			q += (size - 1);
		}
		i += j;
	}
	printf("%d, %d\n", sumd, sumu);
}

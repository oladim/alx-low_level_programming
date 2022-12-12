#include <stdio.h>

/**
 * main - program to comb values
 *
 * Return: Always 0 Success
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
			putchar('0' + i);
			putchar('0' + j);
			putchar('0' + k);
			if (i == 7 && j == 8)
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}

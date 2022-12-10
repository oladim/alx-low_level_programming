#include <stdio.h>

/**
 * main - welcome to the program
 *
 * Return: Always 0 Success
 */

int main(void)
{
	int i;
	char t;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	for (t = 'a'; t <= 'f'; t++)
		putchar(t);
	putchar('\n');
	return (0);
}

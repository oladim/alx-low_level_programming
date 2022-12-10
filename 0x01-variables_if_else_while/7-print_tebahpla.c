#include <stdio.h>
#include <string.h>

/**
 * main - promgram entry
 *
 * Return: Always 0 Success
 */

int main(void)

{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i = ((int) strlen(alphabets) - 1);

	while (i >= 0)
	{
		putchar(alphabets[i]);
		i--;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <string.h>

/**
 * main - promgram entry
 *
 * Return: Always 0 Success
 */

int main(void)

{
	int i = 0;
	int p = 0;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (i < (int) strlen(alphabets))
	{
		putchar(alphabets[i]);
		i++;
	}
	while (p < (int) strlen(alphabet))
	{
		putchar(alphabet[p]);
		p++;
	}
	putchar('\n');
	return (0);
}

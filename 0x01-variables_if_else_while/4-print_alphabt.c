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
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	while (i < (int) strlen(alphabets))
	{
		if ((alphabets[i] == 'e') || (alphabets[i] == 'q'))
		{
			i++;
		} else
		{
			putchar(alphabets[i]);
			i++;
		}
	}
	putchar('\n');
	return (0);
}

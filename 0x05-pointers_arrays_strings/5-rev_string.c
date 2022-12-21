#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - print string value
 * @s: parameter to print
 */

void rev_string(char *s)
{
	int i = 0;
	int len;
	int dec;

	char scop[1000];

	strcpy(scop, s);
	len = strlen(s) - 1;
	dec = strlen(s) - 1;

	while (i <= dec)
	{
		s[i] = scop[len];
		i++;
		len--;
	}
}

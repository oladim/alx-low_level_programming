#include "main.h"
#include <string.h>

/**
 * _strpbrk - function to search for occurence of a character
 * @s: string to check
 * @accept: characters to look for
 * Return: length of characters in s that contains entirety of accept
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

#include "main.h"
#include <string.h>

/**
 * _strspn - function to search for occurence of a character
 * @s: string to check
 * @accept: characters to look for
 * Return: length of characters in s that contains entirety of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

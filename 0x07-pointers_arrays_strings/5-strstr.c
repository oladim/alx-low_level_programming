#include "main.h"
#include <string.h>

/**
 * _strstr - finding substring
 * @haystack: string to check
 * @needle: characters to look for
 * Return: length of characters in s that contains entirety of accept
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

#include "main.h"
#include <string.h>

/**
 * _strchr - function to search for occurence of a character
 * @s: string to check
 * @c: character to look for
 * Return: address to the pointer
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

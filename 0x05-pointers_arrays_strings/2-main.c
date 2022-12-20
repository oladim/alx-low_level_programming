#include "main.h"

/**
 * main - function to print length of a string
 *
 * Return: Always 0 Success
 */

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}

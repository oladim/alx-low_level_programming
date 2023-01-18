#include "main.h"
#include <string.h>

/**
 * main - entry point
 * @argc: number of paramaters from prompt
 * @argv: array of the parametrs
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

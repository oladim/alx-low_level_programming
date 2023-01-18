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
	printf("%ld\n", (argc - 1) + (strlen(*argv) - strlen(*argv)));
	return (0);
}

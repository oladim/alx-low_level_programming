#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of paramaters from prompt
 * @argv: array of the parametrs
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);

	}
}

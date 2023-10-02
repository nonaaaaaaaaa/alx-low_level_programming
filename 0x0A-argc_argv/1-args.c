#include <stdio.h>
#include "main.h"

/**
 * main - print number of argument
 * @argc: num of command line
 * @argv: araay name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
		{
			printf("%d\n", i - 1);
		}
	}
	return (0);
}

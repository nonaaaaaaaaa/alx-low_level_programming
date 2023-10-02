#include <stdio.h>
#include "main.h"

/**
 * main - print number of argument
 * @argc: num of command line
 * @argv: araay name
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

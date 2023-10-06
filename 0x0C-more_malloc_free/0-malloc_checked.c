#include "main.h"

/**
 * *malloc_checked - function that allocates memory
 * @b: size of memory
 * Return: pinter to the add of mem block
 *
 */


void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

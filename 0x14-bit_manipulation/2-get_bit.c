#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given ind
 * @n: number given
 * @index: given index
 * Return: value of the bit at index index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	num <<= index;

	if (num & n)
		return (1);
	else
		return (0);
}

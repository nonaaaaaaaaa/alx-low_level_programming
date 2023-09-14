#include "main.h"
/**
 * print_square - function prints square
 * @size: variable
 * Return: no return
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < (size - 1); b++)
				_putchar('#');
			_putchar('#');
			_putchar('#');
		}
	}
	else
	{
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * Return: no return
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if ((a == 2) || (a == 4))
		{
			continue;
		}
		_putchar(a + 48);
	}
	_putchar('\n');
}

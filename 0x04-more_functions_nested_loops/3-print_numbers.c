#include "main.h"
/**
 * print_numbers - function prints the numbers, from 0 to 9
 *
 * Return: no return
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar (a + 48);
		_putchar ("\n");
	}
}

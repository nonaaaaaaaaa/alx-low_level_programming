#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: no return
 */
void times_table(void)
{
	int a;
	int b = 9;
	int l;

	for (a = 0; a <= 9; a++)
	{
		l = a * b;
	}
	_putchar(l);
	_putchar('\n');
}

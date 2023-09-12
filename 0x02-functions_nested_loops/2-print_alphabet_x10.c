#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet letters
 * desc: The function uses loop to operate
 * Return: no return
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for  (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

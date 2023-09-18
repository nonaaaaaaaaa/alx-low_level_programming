#include "main.h"
/**
 * puts2 - function prints char of string
 * @str: input var
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}

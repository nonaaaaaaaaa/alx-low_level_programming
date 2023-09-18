#include "main.h"
/**
 * puts2 - function prints char of string
 * @str: input var
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = +2;
	}
	_putchar('\n');
}

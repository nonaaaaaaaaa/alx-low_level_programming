#include "main.h"
/**
 * puts2 - function prints char of string
 * @str: input var
 *
 */
void puts2(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

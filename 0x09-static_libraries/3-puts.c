#include "main.h"
/**
 * _puts - function to print string
 * @str: input string
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

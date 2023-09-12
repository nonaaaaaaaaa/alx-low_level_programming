#include "main.h"
/**
 * print_last_digit - function that print last digit of a number
 * @n: number to be targeted
 * Return: returns 0
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + '0');
		return (-1);
	}
	else
	{
		_putchar(l + '0');
		return (l);
	}
}

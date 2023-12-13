#include "main.h"
/**
 * _isdigit - check function for digit
 * @c : char
 * Return: returns 1 if it is uppercase , 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

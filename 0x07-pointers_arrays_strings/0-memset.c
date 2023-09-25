#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: string pointer
 * @b: content of memory fill
 * @n: lenght of memory allocation
 * Return: string (s)
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

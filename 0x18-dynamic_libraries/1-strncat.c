#include "main.h"
/**
 * _strncat - function concatinate two string
 * @dest: destination string
 *@src: source string
 *@n: integer number
 *Return: dest pointer
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';
	return (dest);
}

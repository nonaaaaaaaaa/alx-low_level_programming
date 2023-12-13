#include "main.h"
/**
 * _memcpy -  function that copies memory area
 * @dest: pionter for destination
 * @src: pointer for source
 * @n: length size in memory
 * Return: pinter to dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

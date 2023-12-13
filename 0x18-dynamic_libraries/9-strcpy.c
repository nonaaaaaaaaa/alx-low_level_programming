#include "main.h"
/**
 *  *_strcpy - function copy string
 *  @dest: pointer in buffer
 *  @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}


#include "main.h"
/**
 * _strlen - function to return length of sting
 * @s: input string
 * Return: length of string
 *
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; *s != '\0'; s++)
	{
		index++;
	}
	return (index);
}

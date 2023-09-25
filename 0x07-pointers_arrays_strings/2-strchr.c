#include "main.h"
/**
 * _strchr -  function that get a character in a string
 * @s: pointer string
 * @c: test char
 * Return: string
 *
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

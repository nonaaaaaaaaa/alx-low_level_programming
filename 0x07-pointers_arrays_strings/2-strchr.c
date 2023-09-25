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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			return (0);
	}
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup -  function that returns a pointer
 * @str: string
 * Return: pointer or null
 *
 */

char *_strdup(char *str)
{
	 unsigned int i;
	 int size;
	char *m = NULL;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	m = (char *)malloc(size + 1 * sizeof(char));
	if (m != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			m[i] = str[i];
	}
	else
	{
		return (NULL);
	}
	m[i] = '\0';
	return (m);
}

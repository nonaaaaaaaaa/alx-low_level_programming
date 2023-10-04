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
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);


		for (; i < size; i++)
			m[i] = str[i];

	return (m);
}

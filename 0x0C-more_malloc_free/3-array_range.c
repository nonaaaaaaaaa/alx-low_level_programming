#include "main.h"

/**
 * *array_range - function that creates an array of integers
 * @min: smallest value
 * @max: largest value
 * Return: null for fail
 *
 */

int *array_range(int min, int max)
{
	int *str;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);

	str = malloc(sizeof(*str) * ((max - min) + 1));
	if (str != NULL)
	{
		for (i = min; i <= max; i++)
		{
			str[j] = i;
			j++;
		}
		return (str);
	}
	else
		return (NULL);
}

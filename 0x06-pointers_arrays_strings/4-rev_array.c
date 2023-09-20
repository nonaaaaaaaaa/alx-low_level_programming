#include "main.h"
/**
 * reverse_array - function to reverse ocntent
 * @a: array to be compared
 * @n: size of array
 * Return: reversed array
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

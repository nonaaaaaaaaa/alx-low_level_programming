#include "main.h"
/**
 * print_array - function prints n elements an array of int
 * @a: input of array
 * @n: input var
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(",%d", a[i]);
	}
	printf("\n");
}

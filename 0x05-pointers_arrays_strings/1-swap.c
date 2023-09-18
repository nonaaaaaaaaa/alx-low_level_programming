#include "main.h"
/**
 * swap_int - function to swap values
 * @a: first value
 * @b: second value
 *
 */
void swap_int(int *a, int *b)
{
	int tito;

	tito = *a;
	*a = *b;
	*b = tito;
}

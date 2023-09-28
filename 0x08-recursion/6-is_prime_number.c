#include "main.h"
/**
 * prim - function evaluate prime num
 * @a: input num
 * @b: iterration num
 * Return: 1 success, 0 error
 *
 */
int prim(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prim(a, b + 1));
}
/**
 * is_prime_number -  function that returns 1 if the input intege
 * is a prime number, otherwise return 0
 * @n: input num
 * Return: 1 success, 0 error
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prim(n, 2));
}

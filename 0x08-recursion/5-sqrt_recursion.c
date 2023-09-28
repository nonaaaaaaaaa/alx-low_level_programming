#include "main.h"
/**
 * square - fuction evaluate squared num
 * @a: input num
 * @b: num of iteration
 * Return: 1 success, -1 error
 *
 */

int square(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (square(a, b + 1));
}
/**
 * _sqrt_recursion - function that
 * returns the natural square root of a number
 * @n: input num
 * Return: 1 success, -1 error
 *
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

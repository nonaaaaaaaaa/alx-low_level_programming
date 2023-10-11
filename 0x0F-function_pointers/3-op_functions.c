#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - add two num
 * @a: first num
 * @b: second num
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two num
 * @a: first num
 * @b: second num
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two num
 * @a: first num
 * @b: second num
 * Return: multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two num
 * @a: first num
 * @b: second num
 * Return: division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - get the module of two num
 * @a: first num
 * @b: second num
 * Return: reminder of two num
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

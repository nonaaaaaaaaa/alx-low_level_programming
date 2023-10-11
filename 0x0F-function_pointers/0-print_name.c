#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: person name
 * @f: pointer of function
 * Return: no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}


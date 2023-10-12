#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: comma
 * @n: entry point
 * @...: other args
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *ptr;
	char *sep;
	unsigned int i;
	va_list list;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%s", va_arg(list, char *));
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(list, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%S%S", sep, ptr);
	}
	printf("\n");
	va_end(list);
}

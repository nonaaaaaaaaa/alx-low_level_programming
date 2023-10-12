#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 * @...: other args
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int n = 0;
	int i = 0;
	char *sep = ",";
	char *str;

	va_start(list, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(list, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(list, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(list, double), sep);
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(list);
}

#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * _printf - produces output according to format
 * @format: a string of char representing argument types
 * @...: variable list of args
 * Return: number of chars printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				count += printchar(args);
			}
			else if (*format == 's')
			{
				count += printstring(args);
			}
			else if (*format == '%')
			{
				count += printpercent(args);
			}
			else if (*format == 'd' || *format == 'i')
			{
				count += print_int(args);
			}
			else if (*format == 'b')
			{
				count += print_binary(args);
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

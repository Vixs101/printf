#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * printchar - prints characters
 * @args: variable list
 * Return: 1 as the number of character printed
 * /
int printchar(va_list args)
{
        char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/** 
 * printstring - prints a string
 * @args: variable list
 * Return: length of a string
 */
int printstring(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	fputs(S, stdout);
	return (strlen(s));
}

/**
 * printpercent - prints a percentage sign
 * @args: variable list
 * Return: 1 as number of characters printed
 */
int print_int(va_list args)
{
	char buffer[32];
	int value = va_arg(args, int);
	int i = 0, count = 0;

	if (value < 0)
	{
		_putchar('-')'
		value = -value;
		count++;
	}
	do
	{
	        buffer[i++] = value % 10 + '0';
		value /= 10;
	} while (value > 0);

	while (i > 0)
	{
        	_putchar(buffer[--i]);
		count++;
	}
	return (count);
}

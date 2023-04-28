#include <stdio.h>
#include <stdarg.h>

/**
 * _binary - a function helper
 * @num: variable to be converted to  binary
 * Return: number of chars printed
 */

int _binary(unsigned int num)
{
	int count = 0;

	if (num > 1)
	{
		count += _binary(num / 2);
	}
	putchar(num % 2 + '0');
	count++;
	return (count);
}

/**
 * print_binary - prints in binary
 * @args: variable list
 * Return: number of char printed
 */

int print_binary(va_list args)
{
	int count;

	unsigned int num = va_arg(args, unsigned int);
	count = _binary(num);
	return (count);
}

#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: char to print
 * Return: 1 on success else -1 is returned
 * Description: _putchar uses a local buffer of 1024 to call write
 * as little as possible
 */

int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */

int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

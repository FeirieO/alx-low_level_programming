#include "main.h"

/**
 * _puts - prints a string, followed by a new line,
 * @str: The string to print
 * Return: Always 0.
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');

}

#include "main.h"

/**
 * _puts - prints string
 *
 * @str: string
 *
 * Return: void
 */

void _puts(char *str)
{
	int len = strlen(str), i;

	for (i = 0; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}

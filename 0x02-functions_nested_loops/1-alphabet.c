#include "main.h"

/**
 * print_alphabet - Prints the alphabet in l.case
 *
 * Return (0) Always success
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')

	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

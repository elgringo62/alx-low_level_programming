#include <unistd.h>
/**
 * _putchar - writes chhar c to stdoutput
 *
 * @c: is the printed character
 *
 * Return: On success is 1
 * On error -1 is returned
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

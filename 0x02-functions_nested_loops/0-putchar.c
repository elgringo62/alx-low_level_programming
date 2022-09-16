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

int main(void)
{
	char text[10] = "_putchar";
	int i = 0;
			
	for (i = 0; i < 9; i++)
{
	_putchar(text[i]);
}
	putchar('\n');
					
	return (0);
}

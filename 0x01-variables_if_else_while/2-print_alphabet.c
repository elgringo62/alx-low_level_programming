#include <stdio.h>

/**
 * main - print the alphabet leetters
 *
 * Description: Print the alphabet letters
 *
 * Return: Always (0) success
 *
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}

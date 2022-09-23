#include <stdio.h>

/**
 * main - causes an infinite loop
 *
 * Description: Anticipates an infinite loop
 *
 * Return: ALways success (0)
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
/**
 * Description: main - causes an infinite loop
 *
 * printf - Avoids infinite loop therefore prining on screen
 *
 * while (i < 10)
 * {
 * putchar(i);
 * }
 */
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

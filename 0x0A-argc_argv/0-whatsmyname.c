#include <stdio.h>

/**
 * main - print program name then new line
 * @argv: array of strings passed on to main
 * @argc: number of arguments passed to main
 * Return: (0) Always success
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0)
}

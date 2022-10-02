#include "main.h"
#include <stdio.h>

/**
 * main - print program name then new line
 * @argc: number of arguments passed to main
 * @argv: argument vector
 * Return: (0) Always success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - Print a number followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) Always success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%s\n", argc - 1);
	return (0);
}

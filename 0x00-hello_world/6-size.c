#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints size of various types
 *
 * Return: Always (0) a success
 */

int main(void)
{
	printf("size of char: %d byte/bytes\n", (int) sizeof(char));
	printf("size of int: %d byte/bytes\n", (int) sizeof(int));
	printf("size of short: %d byte/bytes\n", (int) sizeof(short));
	printf("size of long: %d byte/bytes\n", (int) sizeof(long));
	printf("size of float: %d byte/bytes\n", (int) sizeof(float));

	return (0);
}


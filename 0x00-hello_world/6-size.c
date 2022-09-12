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
	printf("size of char: %d byte(s)\n", (int) sizeof(char));
	printf("size of int: %d byte(s)\n", (int) sizeof(int));
	printf("size of float: %d byte(s)\n", (int) sizeof(float));
	printf("size of long int: %d byte(s)\n", (int) sizeof(long int));
	printf("size of long long int: %d byte(s)\n", (int) sizeof(long long int));

	return (0);
}


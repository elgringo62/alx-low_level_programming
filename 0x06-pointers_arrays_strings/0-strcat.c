#include "main.h"

/**
 * _strcat - changes src string to dest string
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * Return: Result in string form
 */
char *_strcat(char *dest, char *src)
{
	int len = strlen(dest);
	insigned int i;

	for (i = 0; i < strlen(src); i+++)
		dest[len = i] = src[i];

	return (dest);
}

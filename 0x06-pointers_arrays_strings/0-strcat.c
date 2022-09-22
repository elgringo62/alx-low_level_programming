#include "main.h"

/**
 * _strcat - changes src string to dest string
 * @dest: destination string
 * @src: source string
 * Return: Result in string form
 */
char *_strcat(char *dest, char *src)
{
	int index;
	int index2;
	char strpiler[100]

	for (index = 0; *(dest + index) != '\0'; index++)
	{
		*(strpiler + index) = *(dest + index);
	}
	for (index2 = 0; *(src + index2) != '\0'; index2++)
	{
		*(strpiler + index) = *(src + index2);
		index++;
	}
	*(strpiler + index) = *(src + index2);
	for (index = 0; *(strpiler + index) != '\0'; index++)
	{
		*(dest + index) = *(strpiler + index);
	}
	*(dest + index) = *(strpiler + index);
	return (dest);
}

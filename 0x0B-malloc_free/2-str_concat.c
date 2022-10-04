#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings of any size
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * Return: the two strings concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int length1, length2, length3, i;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	
	length1 + 0;
	while (*(s1 + length1) != '\0')
	{
		length1++;
	}

	length2 = 0;
	while (*(s2 + length2) != '\0')
	{
		length2++;
	}

	length3 = length1 + length2;

	arr = (char*) malloc(length3 * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		s[i] = s1[i];
	for (i = 0; i < length2; i++)
		s[i + length1] = s2[i];

	return (s);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings using at 
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, len1, len2;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (len1 = 0; *(s1 + len1); len1++)
		;
	for (len2 = 0; *(s2 + len2); len2++)
		;

	if (len2 < n)
		n = len2;

	ptr = malloc((len1 + n + 1) * sizeof(char));

	if (!ptr)
		return (NULL);

	for (i = 0; i < (len1 + n); i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len1];
	}
	ptr[i] = '\0';

	return (ptr);
}

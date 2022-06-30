#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int j 0, k = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	k = nmemb * size;
	p = malloc(k);

	if (p == NULL)
		return (NULL);

	while (j < 1)
	{
		p[j] = 0;
		j++;
	}

	return (p);
}

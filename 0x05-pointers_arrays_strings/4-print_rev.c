#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: string to be reserved.
 */
void print_rev(char *s)
{
	int len = 0, i = 0;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; 1--)
		_putchar(s[i]);

	_putchar('\n');
}

#include "main.h"

/**
 * write a program that prints _putchar. followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = '0'; leter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
	return (0);
}

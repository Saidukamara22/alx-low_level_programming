#include <stdio.h>
#include "main.h"
#include "putchar.h"

/**
 * main - Prints alphabet in lowercase
 *
 * Return: 0.
 */
void print_alphabet(void)
{
	char sai;

	for (sai = 'a'; sai <= 'z'; sai++)
	
		_putchar(sai);
	
	_putchar('\n');
}

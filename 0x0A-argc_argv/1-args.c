#include <stdio.h>

/**
 * main - print the number of arguement passed to it.
 * @args: The number of arguement supplied to the program.
 * @argv: An array of pointers to the arguements.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

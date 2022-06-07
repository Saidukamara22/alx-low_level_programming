#include <main.h>

/**
 * write a program that prints _putchar ,followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("_putchar\n");
	return (0);
}
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

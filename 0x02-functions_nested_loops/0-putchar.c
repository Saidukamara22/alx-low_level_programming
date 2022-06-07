#include <unistd.h>

/**
 * write a program that prints _putchar ,followed by a new line.
 *
 * Return on Success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, c));
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * ldigit - desc
 *
 *    * @m: The number to be checked
 */

void ldigit(int n)
{
	int lst;
	lst = n % 10;
	if (lst > 5)
	{
		printf("Last digit of %d n %d and is greater than 5\n", n, lst);
	}
	else if (lst == 0)
	{
		printf("Last digit of %d n %d and is 0\n", n, lst);
	}
	else
	{
		printf("Last digit of %d n %d and is less than 6 and not 0\n", n, lst);
	}
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

 srand(time(0));
 n = rand() - RAND_MAX / 2;
 ldigit(n);
 return (0);
 }

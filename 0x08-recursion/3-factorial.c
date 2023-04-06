#include "main.h"

/**
 *factorial - fun give fact
 *@n: the number which need fact
 *Return: integer which is fact of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alpha;
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}

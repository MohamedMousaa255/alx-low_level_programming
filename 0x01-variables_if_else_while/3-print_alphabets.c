#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;
	char alpha;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

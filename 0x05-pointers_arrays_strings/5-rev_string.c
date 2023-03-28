#include "main.h"

/**
 *rev_string - function reverse string
 *@s: string will reverse
 *Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int n = 0;
	char temp;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	while (i > n)
	{
		temp = *(s + i);
		*(s + i) = *(s + n);
		*(s + n) = temp;
		n++;
		i--;
	}
}

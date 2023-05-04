#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function
 * @b: pointer
 * Return: unsigned int decimal
*/
unsigned int binary_to_uint(const char *b)
{
	int legth = 0;
	int i = 0;
	unsigned int sum = 0;

	while (b[legth] != '\0')
	{
		if ((b[legth] != 48 && b[legth] != 49) || b == NULL)
			return (0);
		legth++;
	}
	for (i = 0; i <= legth; i++)
	{
		if (b[i] == 49)
		{
			sum = sum + (2 ^ i);
		}
	}
	return (sum);
}

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
	int i;
	int j = 0;
	unsigned long int value;
	unsigned long  int sum = 0;

	while (b[legth] != '\0')
	{
		if ((b[legth] != '0' && b[legth] != '1') || b == NULL)
		{
			return (0);
		}
		legth++;

	}
	legth = legth - 1;
	for (i = 0; i <= legth; i++)
	{
		if (b[legth - i] == '1')
		{
			value = 0;
			for (j = 0; j <= i ; j++)
			{
				if (j == 0)
					value = 1;
				else
					value = value * 2;
			}
			sum = sum + value;

		}
	}
	return (sum);
}

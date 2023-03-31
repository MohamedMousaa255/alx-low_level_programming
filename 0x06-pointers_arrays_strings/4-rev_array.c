#include "main.h"

/**
 * main - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while ((n - 1) != i)
	{
		temp = a[i];
		a[i]  = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}




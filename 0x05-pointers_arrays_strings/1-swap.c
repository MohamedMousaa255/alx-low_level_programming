#include "main.h"
/**
*swap_int - takes two pointer values and swap them
*@a: frist int
*@b: second int
*  Return: 0
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


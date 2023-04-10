#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 *main - main function
 *@argc: prameteri for argument
 *@argv: pointer to array of argument array
 *Return: interger zero
 */
int main(int argc, char *argv[])
{
	int N;
	int R;
	int n = 0;
	int i = 0;

	if (argc != 2)
	{
		printf("Erorr\n");
		return (1);
	}
	else if (argc == 2)
	{	N = atoi(argv[1]);
		if (N < 0)
			printf("0\n");
		else
		{
			while (R != 0)
			{
				if (i == 0)
				{	n = n + (N / 25);
					R = (N % 25), N = R;
					i++; }
				if (i == 1)
				{	n = n + (N / 10);
					R = (N % 10), N = R, i++; }
				if (i == 2)
				{	n = n + (N / 5);
					R = (N % 5), N = R, i++; }
				if (i == 3)
				{	n = n + (N / 2);
					R = (N % 2), N = R, i++; }
				if (i == 4)
				{	n = n + (N / 1);
					R = (N % 1), N = R, i++; }
			}
			 printf("%d\n", n);
		}
	}
	return (0);
}

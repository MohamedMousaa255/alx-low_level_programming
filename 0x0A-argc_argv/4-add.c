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
	int i = 1;
	int flag = 1;
	int j = 1;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			if (!(isdigit(*argv[i])))
			{
				printf("Error\n");
				flag = 0;
				return (1);
			}
			i++;
		}
		if (flag == 1)
		{
			while (j < argc)
			{
				sum += atoi(argv[j]);
				j++;
			}
			printf("%d\n", sum);
		}
	}


	return (0);
}

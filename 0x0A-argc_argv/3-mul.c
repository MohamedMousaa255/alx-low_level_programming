#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - main function
 *@argc: prameteri for argument
 *@argv: pointer to array of argument array
 *Return: interger zero
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int pro;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		pro = x * y;
		printf("%d\n", pro);
	}
	return (0);
}

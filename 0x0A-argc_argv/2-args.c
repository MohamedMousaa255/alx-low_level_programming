#include "main.h"
#include <stdio.h>

/**
 *main - main function
 *@argc: prameteri for argument
 *@argv: pointer to array of argument array
 *Return: interger zero
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

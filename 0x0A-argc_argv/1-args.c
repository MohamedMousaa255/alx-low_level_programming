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
	argv++;
	printf("%d\n", argc - 1);
	return (0);
}

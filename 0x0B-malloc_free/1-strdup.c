#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *_strdup - function to alloc new mem
 *@str: pointer of string
 *Return: char pointer
 */
char *_strdup(char *str)
{
	int i = 1;
	int j = 0;
	char *ptr;

	if (str == 0)
		return (NULL);
	while (str[i] != '\0')
		i++;
	ptr = (char *)malloc(i+1);
	while (*str != '\0')
	{
		ptr[j] = *str;
		str++;
		j++;
	}
	j++;
	ptr[j] = '\0';

	return (ptr);

}

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
	int i = 0;
	int j = 0;
	char *ptr;

	if (str == 0)
		return (NULL);
	while (str[i] != '\0')
		i++;
	ptr = (char *)malloc(i * sizeof(*str) + 1);
	if (m == 0)
		return (NULL);
	else if (m != 0)
	{

		while (*str != '\0')
		{
			ptr[j] = *str;
			str++;
			j++;
		}
		j++;
		ptr[j] = '\0';
	}
	return (ptr);

}

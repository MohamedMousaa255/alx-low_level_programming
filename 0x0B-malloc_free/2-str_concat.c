#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *str_concat - good function
 *@s1: string one
 *@s2: string two
 *Return: pointer of char
 */
char *str_concat(char *s1, char *s2)
{
	int size2 = 0;
	int size1 = 0;
	int i = 0;
	int j = 0;
	char *ptr;

	if (s1 != NULL)
	{
		while (s1[size1] != '\0')
		size1++;
	}
	if (s2 != NULL)
	{
		while (s2[size2] != '\0')
		size2++;
	}
	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	ptr = (char *)malloc((size1 + size2) *  sizeof(char) + 1);
	if (ptr == 0)
		return (NULL);
	while (*s1 != '\0')
	{
		ptr[i] = s1[i];
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		ptr[i] = s2[j];
		s2++;
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

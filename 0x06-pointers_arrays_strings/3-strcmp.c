#include "main.h"
/**
 *_strcmp - this function to compy string
 *@s1: frist pointer
 *@s2: seconed pointer
 *Return: integer value
 */

int _strcmp(char *s1, char *s2)
{
	int flag = 0;

	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		 s1++;
		 s2++;
	}
	if (*s1 == *s2)
	{
		return (flag);
	}
	if (*s1 != *s2)
	{
		flag = *s1 - *s2;
	}
	return (flag);
}

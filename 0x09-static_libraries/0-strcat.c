#include "main.h"

/**
 *_strcat - function take two pointer and point to value of two pointer
 *@dest: frist pointer
 *@src: second pointer
 * Return:char
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}

#include "main.h"

/**
 *_strncat - function take two pointer and point to value of two pointer
 *@dest: frist pointer
 *@src: second pointer
 *@n: counter for the length of byte
 * Return:char
 */

char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;
	int m = 0;
	int len = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*(src + len) != '\0')
	{
		len++;
	}
	if (len < n)
	{
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
	}
	else
	{
		while (n != m)
		{
			*dest = *src;
			dest++;
			src++;
			m++;
		}
	}


	return (s);
}

#include "main.h"
#include <stdio.h>
/**
 *_strncpy - this function to compy string
 *@dest: frist pointer
 *@src: seconed pointer
 *@n:length of the taken string
 *Return: char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *s;
	char *z = src;
	int m = 0;
	int i = 0;

	s = dest;
	while(*z != '\0')
	{
		m++;
		z++;
	}
	if (n >=  m)
	{		
		while(*src != '\0' )
		{	
			*dest = *src;
			src++;
			dest++;
		}
		*dest = '\0';
	}
	if ( n <  m)
	{
		while ( (*src != '\0') && (i < n))
		{
			*dest = *src;
			src++;
			dest++;
			i++;
		}
	}

	return (s);
}

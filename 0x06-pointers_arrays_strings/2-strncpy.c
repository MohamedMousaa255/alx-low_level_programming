#include "main.h"

/**
 *_strncpy - this function to compy string
 *@dest: frist pointer
 *@src: seconed pointer
 *@n:length of the taken string
 *Return: char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}

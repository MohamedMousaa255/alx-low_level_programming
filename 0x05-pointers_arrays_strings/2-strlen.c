#include "main.h"

/**
 *_strlen - this function take string
 *@s: the string
 *Return: 0
 */

int _strlen(char *s)
{
	int i = 0 ;

	while (*(s+i) != '\0' )
	{
		i++;
	}

	return (i);
}

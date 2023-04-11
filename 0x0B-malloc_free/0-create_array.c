#include "main.h"
#include <stdlib.h>
/**
 *create_array _ intialize an array
 *@size: size of array
 *@c: cahr
 *Return: pointer char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i =0;
	char *ptr =(char*)malloc(size);

	if (size == 0 || ptr == 0 )
		return NULL;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);

}

#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 *
 * @size: Takes unsigned int
 *
 * @c : Takes character
 *
 * Return: Pointer
 */
char *create_array(unsigned int size, char c)
{
	char *alsize;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	alsize = malloc(sizeof(*alsize) * size);
	if (alsize == NULL)                                                                                                     
        {                                                                                                                       
                return (NULL);                                                                                                  
        } 
	while (i < size)
	{
		alsize[i] = c;
		i++;
	}
	return (alsize);

}

#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Return a pointer two dimensional array
 *
 * @width: Takes int
 *
 * @height: Takes int
 *
 * Return: Pointer to two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **twodim;
	int i, j;

	i = j = 0;
	if ((height < 1) || (width < 1))
	{
		return (NULL);
	}
	twodim = malloc(sizeof(*twodim) * height);
	if (twodim == NULL)
	{
		free(twodim);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		twodim[i] = malloc(sizeof(int) * width);
		if (twodim[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(twodim[i]);
			}
			return (NULL);
		}
	}
	for (; i < height; i++)
	{
		for (; j < width; j++)
		{
			twodim[i][j] = 0;
		}
	}
	return (twodim);
}

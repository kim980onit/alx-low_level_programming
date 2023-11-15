#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid -function that returns a pointer to a 2 dimensional array
 * of integers
 *
 * @width:firstparemeter
 * @height:secondparemeter
 *
 * Return:pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **gridout;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gridout = (int **)malloc(height * sizeof(int *));

	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (int i = 0; i < height; i++)
	{
		gridout[i] = (int *)malloc(width * sizeof(int));
		if (gridout[i] == NULL)
		{
			for (i--; i >= 0; i--)
			free(gridout);
			free(gridout[i]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			gridout[i][j] = 0;
		}
	}

	return (gridout);
}

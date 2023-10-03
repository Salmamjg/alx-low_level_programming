#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **var;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	var = malloc(sizeof(int *) * height);

	if (var == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		var[i] = malloc(sizeof(int) * width);

		if (var[i] == NULL)
		{
			for (i=0; i >= 0; i--)
				free(var[i]);

			free(var);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			var[i][j] = 0;
	}

	return (var);
}

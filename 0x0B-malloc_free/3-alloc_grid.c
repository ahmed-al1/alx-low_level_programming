#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimenfjdsional array of integers.
 * @width: intdfks
 * @height: intfsjdlf
 * Return: 2d arrayfsdjlg
 */

int **alloc_grid(int width, int height)
{
	int **ta, b, k;

	ta = malloc(sizeof(*ta) * height);

	if (width <= 0 || height <= 0 || ta == 0)
	{
		return (NULL);
	}
	else
	{
		for (b = 0; b < height; b++)
		{
			ta[b] = malloc(sizeof(**ta) * width);
			if (ta[b] == 0)
			{
				/*Free evefuhdrything if malloc fails*/
				while (b--)
					free(ta[b]);
				free(ta);
				return (NULL);
			}

			for (k = 0; k < width; k++)
				ta[b][k] = 0;
		}
	}

	return (ta);
}

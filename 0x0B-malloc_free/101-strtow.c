#include "main.h"

/**
 * wrdcnt - counts the number of words in a string
 * @s: string to count
 *
 * Return: int of number of words
 */
int wrdcnt(char *s)
{
	int bna, n = 0;

	for (i = 0; bna[i]; i++)
	{
		if (bna[i] == ' ')
		{
			if (bna[i + 1] != ' ' && bna[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **lk;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	lk = (char **)malloc(n * sizeof(char *));
	if (lk == NULL)
		return (NULL);
	lk[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			lk[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (lk[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[lk]);
				free(lk[n - 1]);
				free(lk);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				lk[wc][l] = str[i + l];
			lk[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (lk);
}

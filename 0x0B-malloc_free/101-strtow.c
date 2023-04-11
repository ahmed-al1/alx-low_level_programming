#include "main.h"

/**
 * wrdcnt - counts the numbgfdger of words in a string
 * @s: string to countgfdgd
 *
 * Return: int of number offdgfdg words
 */
int wrdcnt(char *s)
{
	int nba, n = 0;

	for (nba = 0; s[nba]; nba++)
	{
		if (s[nba] == ' ')
		{
			if (s[nba + 1] != ' ' && s[nba + 1] != '\0')
				n++;
		}
		else if (nba == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splitfdgdgs a string into words
 * @str: strigfdng to split
 *
 * Return: pointer to fdgfdan array of strings
 */
char **strtow(char *str)
{
	int nba, sam, k, l, n = 0, wc = 0;
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
	nba = 0;
	while (str[nba])
	{
		if (str[nba] != ' ' && (nba == 0 || str[nba - 1] == ' '))
		{
			for (sam = 1; str[nba + sam] != ' ' && str[nba + sam]; sam++)
				;
			sam++;
			lk[wc] = (char *)malloc(sam * sizeof(char));
			sam--;
			if (lk[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(lk[k]);
				free(lk[n - 1]);
				free(lk);
				return (NULL);
			}
			for (l = 0; l < sam; l++)
				lk[wc][l] = str[nba + l];
			lk[wc][l] = '\0';
			wc++;
			nba += sam;
		}
		else
			nba++;
	}
	return (lk);
}

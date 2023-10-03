#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *acc;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;

	acc = malloc(sizeof(char) * l + 1);
	if (acc == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		acc[k] = av[i][j];
		k++;
	}
	if (acc[k] == '\0')
	{
		acc[j++] = '\n';
	}
	}
	return (acc);
}
